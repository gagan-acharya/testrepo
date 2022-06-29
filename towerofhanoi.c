#include <stdio.h>
#include <math.h>
void toh(int n,char s,char t,char d);
void main()
{
    int n;
    char s,t,d;
    printf("Enter\n");
    scanf("%d",&n);
    toh(n,'s','t','d');
    printf("\n%d\n",(int)pow(2,n)-1);
}
toh(int n,char s,char t,char d)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,s,d,t);
    printf("%d move from %c to %c\n",n,s,d);
    toh(n-1,t,s,d);
}
