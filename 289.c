// Important 
// qsort
// call back mechanism


#include<stdio.h>
#include<stdlib.h>
int icmp(const void *, const void *);
int fcmp(const void *, const void *);
int main()
{
    int iarr[] = {34,5,78,2,4,67,34,67,97,23,232,43,0};
    float farr[] = {34.34,233.34,667.56,865.45,3.34,.78,.676,0.5};
    int sz=sizeof(iarr)/sizeof(iarr[0]);
    qsort(iarr, sz, sizeof(int), icmp);
    for(int i=0; i<sz; i++)
        printf("%d\t",iarr[i]);
    printf("\n");
    sz=sizeof(farr)/sizeof(farr[0]);
    qsort(farr,sz, sizeof(float), fcmp);
    for(int i=0; i<sz; i++)
        printf("%.2f\t", farr[i]);
    return 0;
}
int icmp (const void *p, const void *q)
{
    const int *pint;
    const int *qint;
    pint = (int *)p;
    qint = (int *)q;
    if(*pint>*qint)
        return 1;
    else if(*pint <*qint)
        return -1;
    else 
        return 0;
}
int fcmp(const void *p, const void *q)
{
    const float *pfloat;
    const float *qfloat;
    pfloat = (float *)p;
    qfloat = (float *)q;
    if(*pfloat>*qfloat)
        return 1;
    else if(*pfloat<*qfloat)
        return -1;
    else 
        return 0;

}