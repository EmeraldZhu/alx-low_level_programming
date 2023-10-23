/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
    printf("\nIn the call: \n");
    printf("Value of cc: %p\n", cc);
    printf("Address of cc: %p\n", &cc);

    printf("Value of ccc: %c\n", ccc);
    
    *cc = 'o';
    ccc = 'l';
    
    printf("After assigning ccc: \n");
    printf("Value of ccc: %c\n", ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    char *p;

    p = &c;
    c = 'H';
    
    printf("Before the call: \n");
    printf("For Char c: \n");
    printf("Value of c: %c\n", c);
    printf("Address of c: %p\n", p);
    printf("\nFor Pointer p: \n");
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    
    modif_my_char_var(p, c);
    
    printf("\nAfter the call: \n");
    printf("Value of p: %p\n", p);
    printf("Value of c: %c\n", c);
    
    return (0);
}
