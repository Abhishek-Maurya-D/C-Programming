// Most Important page no. 253 in let us C


#include<stdio.h>
int main()
{
    unsigned int arr[3][3]={
                                {2,4,6},{9,1,10},{16,64,5}
                            };
    // printf("%d",**arr);1
    // printf("%d",**arr<*(*arr+2));2
    // printf("%d",*(arr+2)/(*(*arr+1)>**arr));3
    // printf("%d",*(arr[1]+1)|arr[1][2]);4
    // printf("%d", *(arr[0])|*(arr[2]));5
    // printf("%d", arr[1][1]<arr[0][1]);6
    // printf("%d",arr[2][1]&arr[2][0]);7
    // printf("%d",arr[2][2]|arr[0][1]);8
    // printf("%d",arr[0][1]^arr[0][2]);
    printf("%d",++**arr + --arr[1][1]);
    return 0;
}