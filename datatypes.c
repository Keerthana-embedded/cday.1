
#include<stdio.h>
int main()
{
//..................char,...............
	unsigned char a=128;//0 to 255
	char b=128;//-128 to 127
	printf("%d...%d\n",a,b);
//.................int..................	
	int c=-23;
	unsigned int d=-23;
	printf("%d...%u\n",c,d);
	unsigned short int k=65537;
	short int m=-34;
	printf("%u...%d\n",k,m);
//.................float & double.......	
	float e=9.0;
	double f=4.5;
	printf("%e...%f",e,f);
}

