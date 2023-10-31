#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
/* func prototypes for 101-strtow.c file */
int word_count(char *str);
char **allocate_words(int count);
char *copy_word(char *start, char *end);
void free_words(char **words);
char *find_word_end(char *str);
char *skip_spaces(char *str);
char **allocate_and_copy_words(char **words, char *start, char *end, int index);

#endif /* MAIN_H */
