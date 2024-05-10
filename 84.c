// program to print ramanujan numbers upto a certain limit

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Ramanujan Numbers are\n");
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(i==j || i>j)
                continue;
            for(int k=1;k<=100;k++)
            {
                 if(i==k || j==k || j>k || i>k)
                     continue;
                for(int l=1;l<=100;l++)
                {
                    if(i==l || j==l || k==l || i>l || j>l || k>l)
                        continue;
                    a=i*i*i;
                    b=j*j*j;
                    c=k*k*k;
                    d=l*l*l;
                    if(a+b==c+d)
                        printf("%d %d %d %d\n",i,j,k,l);
                    if(b+c==d+a)
                        printf("%d %d %d %d\n",j,k,l,i);
                }
            }
        }
    }
    return 0;
}