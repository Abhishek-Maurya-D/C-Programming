// Writes / Reads records to / from a file in text / binary mode

#include<stdio.h>
int main()
{
    FILE *fp;
    struct emp
    {
        char name[40]; int age; float bs;
    };
    struct emp e;
    char ch = 'Y';
    fp = fopen("Employee.dat","w");
    while(ch=='Y')
    {
        printf("Enter name, age & salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fprintf(fp, "%s %d %f\n",e.name, e.age, e.bs);
        printf("Another Record: ");
        ch = fgetchar();
        printf("%c",ch);
    }
    fclose(fp);
    fp=fopen("Employee.dat","r");
    while(fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs)!=EOF)
        printf("%s %d %f\n", e.name, e.age, e.bs);
    fclose(fp);
    ch='Y';
    fp=fopen("Emp.dat","wb");
    while(ch=='Y')
    {
        printf("Enter name, age, salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fwrite(&e,sizeof(e),1,fp);
        printf("Another Record: ");
        ch=fgetchar();
    }
    fclose(fp);
    fp=fopen("Emp.dat","rb");
    while(fread(&e,sizeof(e),1,fp)==1)
        printf("%s %d %f\n",e.name, e.age, e.bs);
    fclose(fp);
    return 0;
}