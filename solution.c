/* solution in c language */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int test_case,i=0,j,k=0;
long int n,m,s,key,prisoner[1000000]={0};
scanf("%d",&test_case);
for(i=0;i<test_case;i++)
{
j=0;
k=0;
scanf("%ld %ld %ld",&n,&m,&s);
for(j=s-1;j<=m+s-2;j++)
{
k=j;
k=k%n;
prisoner[k]++;
}
printf("%d\n",k+1);
}
}
