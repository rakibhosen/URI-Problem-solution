#include <stdio.h>

int main() {

   float A,B,C,AREA;
    scanf("%f %f %f",&A,&B,&C);
    printf("TRIANGULO: %2.3f\n",AREA=(A*C)/2);
    printf("CIRCULO: %2.3f\n",AREA=3.14159*C*C);
    printf("TRAPEZIO: %2.3f\n",AREA=(A+B)/2*C);
    printf("QUADRADO: %2.3f\n",AREA=B*B);
    printf("RETANGULO: %2.3f\n",AREA=A*B);

    return 0;
}
