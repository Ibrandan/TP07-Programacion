#include <stdio.h>

int main(void) {

    int a, b,c, aux, *p, *q, *p2;

    puts("01");

    puts("Ingrese dos numeros enteros separados por un espacio");    
    scanf("%d %d", &a,&b);

    printf("numero uno: %d \n", a);
    printf("numero dos: %d \n", b);

    puts("---------------------------");

    puts("02");

    p = &a;
    q = &b;

    puts("03");

    printf("Valor de p: %d \n", p);
    printf("Valor de q: %d \n", q);

    puts("04");

    printf("valor del objeto referenciado por p: %d \n", *p);
    printf("valor del objeto referenciado por q: %d \n", *q);
    
    puts("05");

    printf("Direccion de memoria de p: %d \n", &p);
    printf("Direccion de memoria de q: %d \n", &q);

    puts("---------------------------");

    puts("06");

    printf("Ingrese un numero entero \n");
    scanf("%d", &c);

    printf("Valor de c: %d \n", c);
    printf("Direccion de memoria de c: %d \n", &c);

    puts("---------------------------");

    puts("07");

    c = *p;

    printf("Valor de a: %d \n", a);
    printf("Valor de c: %d \n", c);

    puts("---------------------------");

    puts("08");

    c = *p + *q;
    
    printf("Valor de a: %d \n", a);
    printf("Valor de b: %d \n", b);
    printf("Valor de c: %d \n", c);

    puts("---------------------------");
    puts("---------------------------");

    puts("09");

    printf("valor del objeto referenciado por p: %d \n", *p);
    *p=*p+1;
    printf("Despues de asignar *p + 1, *p vale: %d \n", *p);
    
    puts("---------------------------");

    puts("10");
    
    printf("Valor de p: %d \n", p);
    p=p+1;
    printf("Valor de p despues de asignar p + 1: %d \n", p);
    
    puts("---------------------------");

    puts("11");

    p = &a;
    aux = a;
    p2 = &aux;
    
    printf("Valor de a: %d \n", a);
    printf("Valor de aux: %d \n", aux);
    
    *p = *p + 1;
    *p2 = aux + 1;

    printf("Sentencia *p=*p+1 (p): %d \n", *p);
    printf("Sentencia *p=a+1 (p2): %d \n", *p2);

    p=p+1;
    printf("Valor de p en el primer caso: %d \n", p);
    p=&a+1;
    printf("Valor de p en el segundo caso: %d \n", p);

    // si *p = &a

    // *p=*p+1 == *p=a+1

    // p=p+1 == p=&a+1 
    
    return 0;
}