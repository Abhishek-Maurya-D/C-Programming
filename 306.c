#include<stdio.h>
int main()
{
    int data[] = {273, 548, 786, 1096};
    for(int i=0; i<4; i++)
    {
        printf("\n");;
        int n=data[i];
        n=n<<28;
        n=n>>28;
        if((n&1)==1)
            printf("1st Year\n");
        else if((n&2)==2)
            printf("2nd Year\n");
        else if((n&4)==4)
            printf("3rd Year\n");
        else if((n&8)==8)
            printf("4th Year\n");
        int m=data[i];
        m=m<<24;
        m=m>>28;
        m=m<<4;
        if((m&16)==16)
            printf("Mechinical Branch\n");
        else if((m&32)==32)
            printf("Chemical Branch\n");
        else if((m&64)==64)
            printf("Elecronics Branch\n");
        else if((m&128)==128)
            printf("Computer Science Branch\n");
        int j = data[i];
        j=j>>8;
        printf("Room Number = %d\n",j);
        printf("\n");
    }
    return 0;
}