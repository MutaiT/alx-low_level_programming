#ifndef MAIN_H
#define MAIN_H

int main(void);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void set_string(char **s, char *to);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *x);
char *_strpbrk(char *s, char *x);
char *_strstr(char *y, char *x);

#endif
