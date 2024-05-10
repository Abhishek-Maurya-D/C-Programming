// Pre Defined Macros
#include<stdio.h>
#include<stdlib.h>
int main()
{
    #line 100 "Abhishek.C" // for assigning the below line as 100  ---"Abhishek.C" is use for assigning the name Abhishek.C to this file
    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);
    printf("%d\n", __LINE__);
    printf("%s\n", __func__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%d\n", __STDC__);// __STDC__ this preprocessor is for show that the installed C is of standard type or not if it shows the value as 1 then it is of standard type and if it show the value as 0 then it is of not the standard type
    return 0;
}