#include "main.h"
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int i;
    printf("lets see what argv holds[]\n");
    
    for (i = 0; i < argc; i++);
    {
    printf("argv = %s\n", i, argv[i]);
    }
    
    return 0;
}