#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/* Checks if a file is an ELF file */
void check_elf(unsigned char *e_ident)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        /* Check if the magic numbers match the ELF identification */
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            /* Print an error message and exit with code 98 */
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/* Displays the ELF magic numbers */
void print_magic(unsigned char *e_ident)
{
    /* Print the magic numbers */
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

/* Displays the ELF class */
void print_class(unsigned char *e_ident)
{
    /* Print the ELF class */
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid class\n");
            break;
    }
}

/* Displays the ELF data encoding */
void print_data(unsigned char *e_ident)
{
    /* Print the ELF data encoding */
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }
}

/* Displays the ELF version */
void print_version(unsigned char *e_ident)
{
    /* Print the ELF version */
    printf("  Version:                           %d", e_ident[EI_VERSION]);
    if (e_ident[EI_VERSION] == EV_CURRENT)
    {
        printf(" (current)\n");
    }
    else
    {
        printf(" (invalid)\n");
    }
}

/* Displays the ELF ABI */
void print_abi(unsigned char *e_ident)
{
    /* Print the ELF ABI */
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
}

/* Displays the ELF OS/ABI */
void print_osabi(unsigned char *e_ident)
{
    /* Print the ELF OS/ABI */
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/* Displays the ELF type */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
    /* Print the ELF type */
    printf("  Type:                              ");
    switch (e_type)
    {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown type\n");
            break;
    }
}

/* Displays the ELF entry point */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    /* Print the ELF entry point */
    printf("  Entry point address:               %#lx\n", e_entry);
}

/* Closes the ELF file */
void close_elf(int elf)
{
    close(elf);
}

/* Main function */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int o, r;

    /* Open the ELF file in read-only mode */
    o = open(argv[1], O_RDONLY);
    if (o == -1)
    {
        /* Print an error message and exit with code 98 if the file cannot be opened */
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    /* Allocate memory for the ELF header structure */
    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        /* If memory allocation fails, close the file and  then exit with code 98 */
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    /* Read the ELF header into the allocated structure */
    r = read(o, header, sizeof(Elf64_Ehdr));
    if (r == -1)
    {
        /* If reading fails, free the memory, close the file and exit with code 98 */
        free(header);
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        exit(98);
    }

    /* Perform checks and print information about the ELF file */
    check_elf(header->e_ident);
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_osabi(header->e_ident);
    print_abi(header->e_ident);
    print_type(header->e_type, header->e_ident);
    print_entry(header->e_entry, header->e_ident);

    /* Free the allocated memory and close the file descriptor */
    free(header);
    close_elf(o);
    return (0);
}
