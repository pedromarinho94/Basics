#include <stdio.h>

int main()
{
    int x=99;
    while(++x<100)
    {
        printf("x: %d\n", x);
        x*=x;
        printf("xXx: %d\n", x);
        if(x<10) continue;
        if(x>50) break;
    }
    return 0;
}
