#ifndef MAIN_H
#define MAIN_H

void _puts_recursion(char *s);
int _putchar(char c);
void _print_rev_recursioin(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int is_prime_number(int n);
int _sqrt_recursion(int n);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);
void *malloc_checked(unsigned int b);

#endif
