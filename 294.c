#include<stdio.h>
#include<string.h>
int main()
{
    union post{
        char minor[6];
        char major[6];
    };
    struct info {
        char gender;
        union post min_maj;
        char police_name[50];
        int duration_year;
    };
    int i;
    printf("Enter the number of data you want to entered: ");
    scanf("%d", &i);
    struct info a[i];
    for(int j=0; j<i; j++)
    {
        printf("Enter the details of insurance policy holder as: gender, post(minor/major), policy name & duration of policy: ");
        // scanf("%c %s %s %c",&a[j].gender, &a[j].min_maj.minor, &a[j].police_name, &a[j].duration);
        scanf(" %c %s %s %d", &a[j].gender, &a[j].min_maj.minor, &a[j].police_name, &a[j].duration_year);
        fflush(stdin);
    }
    for(int m=0; m<i; m++)
        printf("%c %s %s %d\n",a[m].gender, a[m].min_maj.minor, a[m].police_name, a[m].duration_year);
    return 0;
}