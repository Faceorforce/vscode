#include <stdio.h>

int main()
{
    int a,b;
    int t;
    scanf("%d %d",&a, &b);
    a=12;b=11;
    while (b!=0)
    {
        t = a%b;
        a=b;
        b=t;
       printf("a=%d,b=%d,t=%d\n",a,b,t); 
    }
    printf("gcd=%d\n",a);
    return 0;
}