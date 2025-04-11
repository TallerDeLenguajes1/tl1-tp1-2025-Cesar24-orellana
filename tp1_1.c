#include <stdio.h>

int main(){
    printf("Hola Mundo!!\n"); // Punto 3a)

    int Entero = 10; //Punto 3e)
    int *pEntero = &Entero;
    printf("El contenido apuntado es: %d\n", *pEntero);
    printf("La direccion de memoria del puntero es: %p\n", pEntero);
    printf("La direccion de memoria de la variable es: %p\n", &Entero);
    printf("La memoria utilizada por la variable es: %lu \n", sizeof(Entero));
    
    return 0;
}