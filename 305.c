// Chapter - 21 [A] - (a)
// if 4th bit is on means carnivorus and if off means herbivores

#include<stdio.h>
int main()
{
    struct animal
    {
        char name[30];
        int type;
    };
    struct animal a = {"Ocelot", 18};
    if((a.type&16)==16)
        printf("Carnivorus\n");
    else
        printf("Herbivores\n");
    if((a.type&8)==8)
        printf("Animal is Marsupial\n");
    if((a.type&4)==4)
        printf("Animal is Cetacean\n");
    if((a.type&2)==2)
        printf("Animal is Feline\n");
    if((a.type&1)==1)
        printf("Animal is Canine\n");
    return 0;
}