#ifndef _MAIN_H_
#define _MAIN_H_

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void _putchar(char c);

#endif
