// correct
#include<stdio.h>
int main(){
    //gen= gender, yos = year of service , qual= qualification
    char gen;
    int yos,sal,qual;
    printf("Enter the Gender, qualification(PG=1,G=0) and Year_Of_Service = ");
    scanf("%c%d%d",&gen, &qual, &yos);
    if(gen=='m'){
        if(qual==1){
            if(yos>=10){
                sal=11000;
            }
            else{
                sal=10000;
            }
        }
        else{
            if(yos>=10){
                sal=10000;
            }
            else{
                sal=7000;
            }
        }
    }
    else{
        if(qual==1){
            if(yos>=10){
                sal=12000;
            }
            else{
                sal=10000;
            }
        }
        else{
            if(yos>=10){
                sal=9000;
            }
            else{
                sal=6000;
            }
        }
    }
    printf("Salary = %d",sal);
}