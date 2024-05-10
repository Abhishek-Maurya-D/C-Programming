#include<stdio.h>
int main()
{
    int dd, mm, yy;
    printf("Maths Teaches reasoning, \nnot Algebra & Geometry\n");
    printf("Future of learning \ris remote\n");
    printf("You\tmust\tbe\tcrazy\vto\thate\tthis\tbook\n");// Not working 
    printf("He said, \"How\'s life\?\"\n");
    printf("He said, \"How's life?\"\n"); // Important
    printf("%c %c %c\n", 65, '\101', '\x41');
    printf("Enter data in dd/mm/yy or dd.mm.yy or dd-mm-yy format\n");
    scanf("%d%*c%d%*c%d", &dd, &mm, &yy);
    printf("%d/%d/%d\n", dd, mm, yy);
    return 0;
}