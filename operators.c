
#include<stdio.h>
int main()
{
	
//.............arthematic operators..............
int a,b;
printf("enter a&b");
scanf("%d",&a);
scanf("%d",&b);
printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a/b);
printf("%d\n",a%b);
//............incrment/decrement..................
char c=65;
c++;
printf("%c\n",c);
c--;
printf("%c\n",c);
//..............relational operators...............
float f,g;
printf("enter f and q");
scanf("%f",&f);
scanf("%f",&g);
if(f==g)
	printf("equal\n");
if(f!=g)
	printf("not equal\n");

 if(f>g)
	printf("f is greater\n");

 if(f<g)
	printf("f is lesser\n");

 if(f>=g)
	printf("f is greater and equal\n");
 if(f<=g)
	printf("f is less and equal\n");
//..............assignment operators.................
a=b;
printf("%d\n",a);
a<<=2;
printf("%d\n",a);
a>>=2;
printf("%d\n",a);
a^=b;
printf("%d\n",a);
a|=b;
printf("%d\n",a);
//..............logical operators.......................
if((a)&&(b))
	printf("logiacl and");
if((a)||(b))
	printf("logical or");

if(!(a))
	printf("logical not");

//..............bitwise operators........................
printf("%d\n",(a&b));
	
printf("%d\n",(a|b));

printf("%d\n",(a<<1));
printf("%d\n",~a);
//..............conditional operators.....................
double p=12.98;
double j=12.98;
(p<j)?printf("true\n"):printf("false\n");
//..............special operators.........................
printf("%ld",sizeof(float));
}
