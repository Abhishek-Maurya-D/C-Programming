// combine with 3.txt
#include<stdio.h>
int main()
{
    FILE *fp = fopen("3.txt","r");
    if(fp==NULL)
    {
        perror("File does not open.");
        return 1;
    }
    char str[30];
    if(fgets(str,sizeof(str),fp)!=NULL)
        printf("Read from file: %s", str);
    else
        perror("Error Reading from file.");
    fclose(fp);
    return 0;
}