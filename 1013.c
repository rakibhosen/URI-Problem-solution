#include<stdio.h>
main()
{
	int a,b,c,largest;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
        largest =a;
	}
	if(b>a && b>c){
        largest =b;
	}
	if(c>a && c>b){
        largest =c;
	}
	printf("%d eh o maior\n",largest);
	return 0;
}
