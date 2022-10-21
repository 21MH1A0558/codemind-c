#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem2,temp,i,count=0,temp2,sum=0;
    scanf("%d",&num);
    temp=num; //175
    temp2=num;//175
    while(num)
    {
        count++;//3
        num=num/10;
    }
    for(i=count;i>=1;i--)//
    {
        rem2=temp%10;//rem2=5
        sum+=pow(rem2,i);//0+
        temp/=10;
    }
    if(temp2==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}