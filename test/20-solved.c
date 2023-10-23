#include <stdio.h>

int main(void)
{
    int a[5];
    int *p;
    int *p2;

    *a = 98;
    printf("a[0]: %d\n", *a);
    
    *(a + 1) = 198;
    printf("a[1]: %d\n", *(a + 1));
    
    *(a + 2) = 298;
    printf("a[2]: %d\n", *(a + 2));
    
    a[3] = 398;
    printf("a[3]: %d\n", a[3]);
    
    *(a + 4) = 498;
    printf("a[4]: %d\n", *(a + 4));
    
    p = a + 1;
    *p = 98;
    printf("a[1]: %d\n", a[1]);
    
    p2 = a + 3;
    *p2 = *p + 1337;
    printf("a[3]: %d\n", a[3]);

    return (0);
}
