// Most Important Concept 


#include<stdio.h>
#define PRODUCT(x) (x*x)
int main()
{
    int i=3,j,k,l;
    j=PRODUCT(i+1);
    k=PRODUCT(i++);   // 4*3
    l=PRODUCT(++i);   //7*7
    printf("%d %d %d %d\n",i,j,k,l);
    return 0;
}


// The above code is equivalent to the below one
// int main()
// {
//     int i=3,j,k,l;
//     j=(i*i);
//     k=(i++*i++);      // 4*3
//     l=(++i*++i);
//     printf("%d %d %d %d\n",i,j,k,l);
//     return 0;
// }
