// Rough chapter-7 Exerice

// [1]-(a)
// #include<stdio.h>
// int main()
// {
//     char suite = 3;
//     switch(suite)
//     {
//         case 1:
//             printf("Diamond\n");
//         case 2:
//             printf("Spade\n");
//         default:
//             printf("Heart\n");
//     }
//     printf("I thought one wears a suite\n");
//     return 0;
// }

// [1]-(b)
// #include<stdio.h>
// int main()
// {
//     int c=3;
//     switch(c)
//     {
//         case '3':
//             printf("You never win the silver prize\n");
//             break;
//         case 3:
//             printf("You always lose the gold prize\n");
//             break;
//         default:
//             printf("Of Course provided you win a prize\n");
//     }
//     return 0;
// }

// [1]-(c)
// #include<stdio.h>
// int main()
// {
//     int i=3;
//     switch(i)
//     {
//         case 0:
//             printf("Customers are dicey\n");
//         case 1+2:
//             printf("Markets are pricey\n");
//         case 4/2:
//             printf("Investors are moody\n");
//     }
//     return 0;
// }

// [1]-(d)
// #include<stdio.h>
// int main()
// {
//     int k;
//     float j=2.0;
//     switch(k=j+1)
//     {
//         case 3:
//             printf("Trapped\n");
//             break;
//         default:
//             printf("Caught!\n");
//     }
//     return 0;
// }

// [1]-(e)
// #include<stdio.h>
// int main()
// {
//     int ch = 'a' + 'b';
//     switch(ch)
//     {
//         case 'a':
//         case 'b':
//             printf("Look at 10 ideas, 11th will occur to you\n");
//         case 'A':
//             printf("If you have a good idea, project it\n");
//         case 'b' + 'a':
//             printf("Have ideas, will fly\n");
//     }
//     return 0;
// }

// [2]-(a)
// #include<stdio.h>
// int main()
// {
//     int sute=1;
//     switch(suite)
//     {
//         case 0:
//             printf("Club\n");
//         case 1:
//             printf("Diamond\n");
//     }
//     return 0;
// }

// [2]-(b)
// #include<stdio.h>
// int main()
// {
//     int temp;
//     scanf("%d",&temp);
//     switch(temp)
//     {
//         case(temp<=20):
//             printf("Oooooooohhhi Damn cool!\n");
//         case(temp>20 && temp<=30):
//             printf("Rain rain here again!\n");
//         case(temp>30 && temp<=40):
//             printf("Wish I am on Everest\n");
//         default:
//             printf("Good old Nagpur weather\n");
//     }
//     return 0;
// }

// [2]-(c)
// #include<stdio.h>
// int main()
// {
//     float a=3.5;
//     switch(a)
//     {
//         case 0.5:
//             printf("The art of C\n"); break;
//         case 1.5:
//             printf("The spirit of C\n"); break;
//         case 2.5:
//             printf("See through C\n"); break;
//     }
//     return 0;
// }

// [2]-(d)
#include<stdio.h>
int main()
{
    int a=3, b=4, c;
    c=b-a;
    switch(c)
    {
        case 1 || 2:
            printf("God give me a chance to change things\n");
            break;
        // case a || b:
        //     printf("God give me a chance to run my show\n");
        //     break;
    }
    return 0;
}