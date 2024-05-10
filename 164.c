#include<stdio.h>
void modify(int []);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    modify(arr);
    // Print the modified array
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}
void modify(int array[])
{
    for (int i = 0; i < 10; i++)
        array[i] = array[i] * 3;
}
