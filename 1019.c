#include <stdio.h>

int main() {

       int age,day,month,year,reminder,n;
    scanf("%d",&n);
    age=n/365;
    reminder=n%365;
    month=reminder/30;
    day=reminder%30;
    printf("%d ano(s)\n",age);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;
}
