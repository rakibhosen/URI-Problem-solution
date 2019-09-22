#include <stdio.h>
int main()
{
   float N1,N2,N3,N4,N5,ave,total_ave,sum,media;
   scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
   media=(N1*2+N2*3+N3*4+N4*1);
   ave=media/10;
   printf("Media: %0.1f\n",ave);
   if(ave>=7.0)
    printf("Aluno aprovado.\n");
   if(ave<5.0)
    printf("Aluno reprovado.\n");
   if(ave>=5.0&&ave<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
   printf("Nota do exame: %0.1f\n",N5);
   total_ave=(ave+N5)/2;
   if(total_ave>=5.0)
   printf("Aluno aprovado.\n");
   if(total_ave<=4.9)
    printf("Aluno reprovado.\n");
printf("Media final: %0.1f\n",total_ave);
   }
   return 0;
}
