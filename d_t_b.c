#include<stdio.h>
int d_t_b(int n)
{
    int rem;int b=0;
    if(n==0)
    {
        b=0;
    }
    else if(n>0)
    {
        while(n>0)
        {
            rem=n%2;
            b=b*10+rem;
            n=n/2;
        }
        printf("\n %d : is the binary \n",b);
    }
    return b;
  }
int main()
{
    int n;
    printf("Enter the number whose binary is to be found out");
    scanf("%d",&n);
    d_t_b(n);
    return 0;
}
