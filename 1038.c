#include<stdio.h>
int main()
{
    int X,Y;
    float sum;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X==1){
        sum=Y*4.00;
    printf("Total: R$ %.2f\n",sum);
    }
    if(X==2){
        sum=Y*4.50;
    printf("Total: R$ %.2f\n",sum);
    }
     if(X==3){
        sum=Y*5.00;
    printf("Total: R$ %.2f\n",sum);
    }
    if(X==4){
        sum=Y*2.00;
    printf("Total: R$ %.2f\n",sum);
    }
    if(X==5){
        sum=Y*1.50;
    printf("Total: R$ %.2f\n",sum);
    }


return 0;


}
