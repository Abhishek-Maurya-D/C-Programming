// Illustration of different methods of looping

/*    //1st mehtod
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}
*/

/*    //2nd method
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/

/*     //3rd method
#include<stdio.h>
int main(){
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i+=1;
    }
    return 0;
}
*/

/*        //4th method
#include<stdio.h>
int main(){
    int i=0;
    while(i++<10)
        printf("%d\n",i);
    return 0;
}
*/

     //5th method
#include<stdio.h>
int main(){
    int i=0;
    while(++i<=10)
        printf("%d\n",i);
    return 0;
}
