// link with donor_file.txt


#include <stdio.h>
struct BloodDonor {
    char name[21];
    char address[41];
    int age;
    int bloodType;  // Assuming blood type is an integer (1, 2, 3, or 4)
};
int main() {
    FILE *fp;
    fp = fopen("donor_file.txt", "r");
    if (fp == NULL) {
        printf("File can't be open.\n");
        return 1;
    }
    struct BloodDonor donor[10];
    // Read records into the array
    for (int i = 0; i < 10; i++) {
        if (fscanf(fp, "%20s %40s %d %d",
                   donor[i].name, donor[i].address, &donor[i].age, &donor[i].bloodType) != 4) {
            printf("Error reading record %d from the file.\n", i + 1);
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    printf("List of Blood Donors (Age < 25, Blood Type 2):\n");
    // Print eligible donors
    for (int i = 0; i < 10; i++) {
        if (donor[i].age < 25 && donor[i].bloodType == 2) {
            printf("Name: %s\n", donor[i].name);
            printf("Address: %s\n", donor[i].address);
            printf("Age: %d\n", donor[i].age);
            printf("Blood Type: %d\n", donor[i].bloodType);
            printf("----------------------------\n");
        }
    }
    return 0;
}