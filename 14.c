#include<math.h>
#include<stdio.h>
int main(){

//to calculate the distance between to points when its coordinates is given

    int L1, L2, G1, G2, distance, distance_km, distance_nm;
    float D;
    printf("Enter the coordinates of 1st point (L1,G1) = ");
    scanf("%d%d",&L1,&G1);
    printf("Enter the coordinates of 2nd point (L2,G2) = ");
    scanf("%d%d",&L2,&G2);
    D=3963*acos((sin(L1)*sin(L2)) + (cos(L1)*cos(L2)*cos(G2-G1)));
    printf("The distance in nautical miles is %f",D);
}