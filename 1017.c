#include <stdio.h>

int main() {
 float l_s,h,v,sum,result;
	l_s=12;
	scanf("%f%f",&h,&v);
	sum = v/l_s;
	result =sum*h;
	printf("%.3f\n",result);

    return 0;
}
