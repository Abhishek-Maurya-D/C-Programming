// Conditional Complication
// #ifdef, #ifndef, #undef

#include<stdio.h>
#include<stdlib.h>
#define Intel
int main()
{
    #ifdef Intel
        printf("Code for Intel Machine\n");
    #else
        printf("Code for Non-Intel Machine\n");
    #endif
    #undef Intel
    #ifdef Intel
        printf("Code for Intel Machine\n");
    #else
        printf("Code for Non-Intel Machine\n");
    #endif
    return 0;
}