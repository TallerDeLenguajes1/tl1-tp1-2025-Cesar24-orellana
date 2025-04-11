#include <stdio.h>

int CalcularCuadrado(int a);
void CalcularCuadrado2(int a,int *b);
void DireccionMemoria(int a);
void invertir(int *a,int *b);
void OrdenarNumero(int *a,int *b);

int main() { // Punto f
    int a = 2;
    int b = 4;
    int pb;
    int cuadrado = CalcularCuadrado(a);
    printf("El cuadrado de a=%d es: %d\n", a, cuadrado);
    CalcularCuadrado2(b, &pb);
    printf("El cuadrado de b=%d es: %d\n", b, pb);

    int numero;
    printf("Ingrese un numero:\n"); // Punto c (Lo hago así, ya que esto entendi que pedia el punto, pero si no es lo que me pedian mil disculpa 😅)
    scanf("%d", &numero);
    DireccionMemoria(numero);
    
    int dato1, dato2; //Punto d
    printf("Ingrese un numero para a\n");
    scanf("%d", &dato1);
    printf("Ingrese un numero para b\n");
    scanf("%d", &dato2);
    printf("Invertir numeros\n");
    invertir(&dato1,&dato2);
    printf("El valor de a=%d\n", dato1);
    printf("El valor de b=%d\n", dato2);

    int dato3, dato4; //Punto e
    printf("Ingrese dos numeros para acomodar de menor a mayor\n");
    printf("Ingrese un numero\n");
    scanf("%d", &dato3);
    printf("Ingrese un numero\n");
    scanf("%d", &dato4);
    OrdenarNumero(&dato3, &dato4);
    printf("El valor de a=%d\n", dato3);
    printf("El valor de b=%d\n", dato4);

    return 0;
}

int CalcularCuadrado(int a){ //Punto a
    return a*a;
}

void CalcularCuadrado2(int a,int *b){ //Punto b
    *b = a*a;
}

void DireccionMemoria(int a){ //punto c
    printf("El numero ingresado es: %d\n", a); // Contenido de la variable
    printf("Direccion de memoria del numero es: %p\n", &a);

}

void invertir(int *a,int *b){ //punto d
    int aux = *a;
    *a = *b;
    *b = aux;

}

void OrdenarNumero(int *a,int *b){ //punto e
    if (*a>*b) invertir(a, b);
}