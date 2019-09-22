#include <stdio.h>

int main() {

   int N;
    float H,SALLARY,US;

    scanf("%d",&N);
    printf("NUMBER = %d\n",N);
    scanf("%f",&H);
    scanf("%f",&SALLARY);
    US = SALLARY*H;
    printf("SALARY = U$ %4.2f\n",US);

    return 0;
}
