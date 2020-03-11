#include <stdio.h> 
#include <stdlib.h> 
int main (){
    int x;
    printf ("Introduce el numero de estrellas: ");
    scanf ("%d",&x);
    for (int y=1; y<=x; y++){
        for (int z=1; z<=x-y; z++)
        printf (" ");
        for (int z=1; z<=2*y-1; z++)
        printf (" *");
        printf ("\n");
    }
}