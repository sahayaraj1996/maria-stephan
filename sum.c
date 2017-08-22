#include<studio.h>
void main()
{
int n,i,sum=0;
printf("Enter a positive integier:");
scanf("%d",&n);
for(i=1; i<n; ++i)
{
sum+=i;
}
printf("sum=%d",sum);
return 0;
}
