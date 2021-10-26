#include <stdio.h>

void count_vowels(char *string);

void main()
{
    char c[] = "ABCDEFGHIJ";
    
    count_vowels(c);
}

void count_vowels(char *string)
{
    int counter_array[5] = {0, 0, 0, 0, 0};
    int i=0;
       
    while (string[i] != '\0')
    {        
        if(string[i] == 'A') counter_array[0]++;
        else if(string[i] == 'E') counter_array[1]++;
        else if(string[i] == 'I') counter_array[2]++;
        else if(string[i] == 'O') counter_array[3]++;
        else if(string[i] == 'U') counter_array[4]++;
        
        i++;
    }
    
    printf("Nr of A vowels: %d\n", counter_array[0]);
    printf("Nr of E vowels: %d\n", counter_array[1]);
    printf("Nr of I vowels: %d\n", counter_array[2]);
    printf("Nr of O vowels: %d\n", counter_array[3]);
    printf("Nr of U vowels: %d\n", counter_array[4]);
}
