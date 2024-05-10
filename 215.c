// Reverse strings stored in an array of pointers

#include<stdio.h>
#include<string.h>
void xstrrev (char *ss);
int main()
{
    char str[][35]={"To ere is human...","But to really mess things up...", "One needs to know C !!"};
    for(int i=0; i<=2; i++)
    {
        xstrrev(str[i]);
        printf("%s\n",str[i]);
    }
    printf("address of s = %d",str[1]);
    return 0;
}
void xstrrev(char *s)
{
    int l;
    char *t, temp;
    l=strlen(s);
    t=s+l-1;
    printf("%d\n",t);
    for(int i=1; i<=l/2; i++)
    {
        temp=*s;
        *s=*t;
        *t=temp;
        s++;
        t--;
    }
}