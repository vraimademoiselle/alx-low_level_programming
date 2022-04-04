#include "stdio.h"
#include <stdlib.h>
/**
 *main - This code uses malloc.
 *@*ptr here is a pointer variable
 *in order to execute malloc u need to use the prototpye -
 *int *ptr = (int *)malloc(n*sizeof(int));
 *then it finds the amount of adress needed to store an integer
 *which is 4 bytes
 */
int main(void)
{
int i, n;
printf("Enter the number of integers: ");
scanf("%d", &n);
int *ptr = (int*) malloc(n * sizeof(int));
if (ptr == NULL)
{
printf("Memory not available.");
exit(1);
}
for (i = 0; i < n; i++)
{
printf("Enter an integer: ");
scanf("%d", ptr + 1);
}
for (i = 0; i < n; i++)
printf("%d ", *(ptr + i));
return (0);
}
