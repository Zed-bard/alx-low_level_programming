#ifndef DYNAMIC_LIB
#define DYNAMIC_LIB
#include <stdlib.h>

/*Fuctions prototyp*/

int _putchar(char c);
int _islowercase(int c);
int _isalpha(int c);
int _abs(int n);
int isCharUpper(int c);
int check_digit(int c);
int getStringLength(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int stringToIntConverter(char *s);
char *appendString(char *dest, char *src);
char *cat_str(char *dest, char *src, int n);
char *_strncpoy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *fillMemory(char *s, char b, unsigned int n);
char *_memcopy(char *dest, char *src, unsigned int n);
char *locateCharacter(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif /* DYNAMIC_LIB */

