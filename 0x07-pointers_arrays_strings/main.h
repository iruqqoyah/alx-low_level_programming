#ifndef _MAIN_H_
#define _MAIN_H_

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(chchar *src, unsigned int n);
char *_strchr(chr c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);



#endif
