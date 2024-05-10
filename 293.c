#include <stdio.h>
int main() {
    struct date_of_join {
        int day;   
        int month; 
        int year;
    };
   struct date_of_join a[10];
   for (int i = 0; i < 10; i++)
   {
       printf("Enter date of joining for employee %d (day month year): ", i + 1);
       scanf("%hu %hu %u", &a[i].day, &a[i].month, &a[i].year);
       fflush(stdin);
   }
   for (int i = 0; i < 9; i++) {
       for (int j = i + 1; j < 10; j++) {
           if ((a[i].year > a[j].year) ||
               (a[i].year == a[j].year && a[i].month > a[j].month) ||
               (a[i].year == a[j].year && a[i].month == a[j].month && a[i].day > a[j].day)) {
               struct date_of_join temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       }
   }
   printf("\nSorted date of joining in ascending order:\n");
   for (int i = 0; i < 10; i++) {
       printf("%hu %hu %u\n", a[i].day, a[i].month, a[i].year);
   }
   return 0;
}