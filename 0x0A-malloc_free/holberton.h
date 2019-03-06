#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);
char *create_array(unsigned int size, char c);
int _strlen(char *s);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int _allstrlen(int ac, char **av);

#endif /* _HOLBERTON_H_ */
