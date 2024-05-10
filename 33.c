#include<stdio.h>

// Very Important
// To find the first day of a year

int main(){
    int ref_year=2001,total_day,day,rem_year,year,No_of_year,leap_year=0;
    printf("Enter the year = ");
    scanf("%d",&year);
    No_of_year=year-ref_year;
    for(ref_year=2001;ref_year<year;ref_year++){
        if(ref_year%100==0){
            if(ref_year%400==0){
                leap_year++;
            }
            else{
                leap_year=leap_year;
            }
        }
        else{
            if(ref_year%4==0){
                leap_year++;
            }
            else{
                leap_year=leap_year;
            }
        }
    }
    rem_year=No_of_year-leap_year;
    total_day=leap_year*366+rem_year*365;
    day=total_day%7;
    if(day==0){
        printf("Monday");
    }
    else if(day==1){
        printf("Tuesday");
    }
    else if(day==2){
        printf("Wednesday");
    }
    else if(day==3){
        printf("Thrusday");
    }
    else if(day==4){
        printf("Friday");
    }
    else if(day==5){
        printf("Saturday");
    }
    else if(day==6){
        printf("Sunday");
    }
    return 0;
}