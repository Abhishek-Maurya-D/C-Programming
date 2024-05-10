// Insertion in the Array


#include<stdio.h>
int main()
{
    int n, num, pos;
    printf("\nEnter the Number of element in array: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the array element: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter data you want to insert: ");
    scanf("%d",&num);
    printf("\nEnter position you want to enter: ");
    scanf("%d",&pos);
    if(pos<=0 || pos>(n+1)){
        printf("Invalid Option");
    }
    else{
        for(int i=(n-1); i>=(pos-1); i--){
            a[i+1] = a[i];
        }
        a[pos-1] = num;
        n++;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}