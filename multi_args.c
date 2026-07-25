// write a c program to multiply two float numbers from command line
#include <stdio.h>
#include <stdlib.h> // atoi, atof...

float main (int argc, char *argv[] )
{
    if (argc != 3)
    {
        printf("No sufficient arguments \n");
        return 1;
    }
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    printf("Product:  %f", a*b);


}
