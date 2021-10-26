#include <stdio.h>
#include <stdlib.h>

char *highs, *lows;

void print (int *a, int *b);

int main()
{
    int a[2]={10,20};
    int *b;
    
    b = malloc(2 * sizeof(int));
    
    print(a, b);
    
    free(b);
    
    highs = (char *)&a[0];
    lows = (char *)&a[1];
    
    printf("sizeof: %ld\n", sizeof(int));
    printf("Stack usage: %ld\n", lows-highs);
    
    return 0;
}

void print (int *a, int *b)
{
    printf("a1: %d\na2: %d\n", *a, *(a+1));
    
    *b = 100;

    *(b+1) = 200;
    
    printf("b1: %d\nb2: %d\n", b[0], b[1]);
}
