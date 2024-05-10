// Pasting and string pre-processor execution

#include<stdio.h>
#include<stdlib.h>
#define Name(s) #s
#define Concat(x,y) x##y
int main()
{
    printf(Name(Abhishek Maurya\n));
    printf("%s","Diwakar Maurya\n");   // for String printing
    int ab=25;
    printf("%d\n",ab);
    printf("%d\n",Concat(a,b));
    // printf("%d",b);
    return 0;
}