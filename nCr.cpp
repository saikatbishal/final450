#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,n=0,t,num,tmp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&c);
        n =  (int)log2(c)+1;
        num=pow(2,n-1);
        n=0;
		printf("%lld\n",num);
		printf("%lld\n",num*(3*num-c-3-1)+1+c);
    }
    return 0;
} 

