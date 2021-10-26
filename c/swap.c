void swap(int *i, int *k);

void main{

 int x=10, y=5;
 
 swap(&x, &y);

 printf("X %d e Y %d", x, y);
}

void swap(int *i, int *k)
{
	int aux=0;

	aux=*k; //i=10, k=5, aux=5
	*k=*i;   //i=10, k=10, aux=5
	*i=aux; //i=5, k=10, aux=5
}