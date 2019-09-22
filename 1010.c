#include <stdio.h>

int main() {

   int number,product,number2,product2;
    float  price,price2,sum1,sum2,sum3;;
    scanf("%d",&number);
   scanf("%d",&product);
    scanf("%f",&price);
     scanf("%d",&number2);
   scanf("%d",&product2);
    scanf("%f",&price2);
    sum1=product*price;
    sum2=product2*price2;
    sum3=sum1+sum2;
    printf("VALOR A PAGAR: R$ %2.2f\n",sum3);

    return 0;
}
