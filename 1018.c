#include <stdio.h>

int main() {

    int note,temp,reminder;
    int note100,note50,note20,note10,note5,note2,note1;
    scanf("%d",&note);
    printf("%d\n",note);
    temp=note;
    if(note>0 && note<1000000)
    {
        note100 =temp/100;
        printf("%d nota(s) de R$ 100,00\n",note100);
        reminder =temp%100;

        note50 =reminder/50;
        printf("%d nota(s) de R$ 50,00\n",note50);
        reminder =reminder%50;

        note20= reminder/20;
        printf("%d nota(s) de R$ 20,00\n",note20);
        reminder=reminder%20;

        note10= reminder/10;
        printf("%d nota(s) de R$ 10,00\n",note10);
        reminder=reminder%10;

        note5= reminder/5;
        printf("%d nota(s) de R$ 5,00\n",note5);
        reminder=reminder%5;

        note2= reminder/2;
        printf("%d nota(s) de R$ 2,00\n",note2);
        reminder=reminder%2;

        note1= reminder/1;
        printf("%d nota(s) de R$ 1,00\n",note1);
        reminder=reminder%1;
    }
    else
    {
        return 1;
    }

    return 0;
}
