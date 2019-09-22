#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,s,area;
    scanf("%f%f%f",&A,&B,&C);
    if(A+B>C&&B+C>A&&C+A>B){
        s=(A+B+C);

    printf("Perimetro = %0.1f\n",s);
    }
    else{
      area=0.5*C*(A+B);
      printf("Area = %0.1f\n",area);
    }
    return 0;
}
