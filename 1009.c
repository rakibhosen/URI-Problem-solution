#include <stdio.h>

int main() {

    float sallary,sold,net_sallary,sum;
    char name[20];
    scanf("%s",&name);
    scanf("%f",&sallary);
    scanf("%f",&sold);
    sum = sold*15/100;
    net_sallary = sallary+sum;
    printf("TOTAL = R$ %2.2f\n",net_sallary);
    return 0;
}
