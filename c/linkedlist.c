#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct s_List
{
  unsigned char i;
  struct s_List *next;
};

void printList (struct s_List *n);

void main ()
{
  struct s_List First;
  struct s_List Second;
  struct s_List Third;

  First.i = 1;
  Second.i = 2;
  Third.i = 3;

  First.next = &Second;
  Second.next = &Third;
  Third.next = NULL;

  printList (&First);
}

void printList (struct s_List *n)
{
    while (n != NULL)
    {
        printf ("Number:%d\n", n->i);
        n = n->next;
        
        if (n == NULL)
	    {
	        printf ("List reached the end.");
        }
    }
}
