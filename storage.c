
#include<stdio.h>
void fun();
extern int l;
static int m;
int main()
{
static int m=2;
printf("%d\n",m);
int i=12;
printf("%d\n",i);
register int k=9;
printf("%d\n",k);
fun();
printf("%d\n",l);

}

//printf("%d\n",i);
//printf("%d\n",k);
void fun()
{
printf("%d\n",m);
}
