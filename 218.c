#include <string.h>
#include <stdio.h>
int main() {
    char snt[100];
    int i=0, j, k;
    printf("Enter the Sentence: ");
    gets(snt);
    for (i; i < strlen(snt); i++){
        for(j=i; j<i+3; j++){
            if((snt[j]=='t' || snt[j]=='T') && (snt[j+1]=='h' || snt[j+1]=='H') && (snt[j+2]=='e' || snt[j+2]=='E')){
                for(k=j; k<strlen(snt);  k++){
                    snt[k]=snt[k+3];
                }
                i--;
            }
        }
    }
    puts(snt);
    return 0;
}
