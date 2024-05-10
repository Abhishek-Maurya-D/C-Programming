#include<stdio.h>
int main(){

    //To print the size of A0 to A8 sheet
    int l, w, t;
    l=1189;
    w=841;
    for(int i=0;i<9;i++){
        printf("\n A%d: %dmm * %dmm",i,l,w);
        t=l;
        l=w;
        w=t/2;
    }
    return 0;
}