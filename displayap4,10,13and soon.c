#include<stdio.h>
int main()
{
printf("WELCOME\n\n");
int x;
printf("Enter a number : ");
scanf("%d",&x);
for(int i=4;i<=(3*x)+4;i=i+3){
printf("%d\n",i);
}
return 0;
}