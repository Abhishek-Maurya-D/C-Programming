// link with transactions.dat
// link with custoemer.dat


#include <stdio.h>
#include <stdlib.h>
int p=0;
struct customer
{
    int accno;
    char name[30];
    float balance;
};
struct trans
{
    int accno;
    char trans_type;
    float amount;
};
int doesAccountExist(FILE *file, int accno)
{
    struct customer cust;
    fseek(file, 0, SEEK_SET);
    while (fread(&cust, sizeof(struct customer), 1, file) == 1)
    {
        if (cust.accno == accno)
        {
            return 1;
        }
    }
    return 0; 
}
void enterCustomerData(FILE *file)
{
    p++;
    struct customer cust;
    printf("Enter customer records: \n");
        printf("Customer No. %d:\n", p);
        printf("Account Number: ");
        scanf("%d", &cust.accno);
        if (doesAccountExist(file, cust.accno))
        {
            printf("Account with the given number already exists.\nSkipping data entry.\n");
            p--; 
        }
        printf("Name: ");
        scanf("%s", cust.name);
        printf("Balance: ");
        scanf("%f", &cust.balance);
        fwrite(&cust, sizeof(struct customer), 1, file);
        printf("Data entered successfully!\n");
    while (getchar() != '\n')
        ;
}
void processTransactions(FILE *customerFile, FILE *transactionFile)
{
    struct customer cust;
    struct trans transaction;
    printf("Enter transactions (Credit/C or Withdrawal/W):\n");
    printf("Enter 'E' to exit transaction entry.\n");
    while (1)
    {
        printf("Account Number: ");
        scanf("%d", &transaction.accno);
        if (transaction.accno == -1)
        {
            break;
        }
        if (!doesAccountExist(customerFile, transaction.accno))
        {
            printf("Account with the given number does not exist. Skipping transaction entry.\n");
            continue;
        }
        printf("Transaction Type (Credit/C or Withdrawal/W): ");
        scanf(" %c", &transaction.trans_type);
        if (transaction.trans_type == 'E' || transaction.trans_type == 'e')
        {
            break;
        }
        printf("Amount: ");
        scanf("%f", &transaction.amount);
        fseek(customerFile, 0, SEEK_SET);
        while (fread(&cust, sizeof(struct customer), 1, customerFile) == 1)
        {
            if (cust.accno == transaction.accno)
            {
                if (transaction.trans_type == 'C' || transaction.trans_type == 'c')
                {
                    cust.balance += transaction.amount;
                }
                else if (transaction.trans_type == 'W' || transaction.trans_type == 'w')
                {
                    if (cust.balance - transaction.amount >= 100)
                    {
                        cust.balance -= transaction.amount;
                    }
                    else
                    {
                        printf("Insufficient funds for withdrawal from account %d.\n", cust.accno);
                    }
                }
                fseek(customerFile, -sizeof(struct customer), SEEK_CUR);
                fwrite(&cust, sizeof(struct customer), 1, customerFile);
                break; 
            }
        }
    }
    while (getchar() != '\n')
        ;
}
void printAllCustomerData(FILE *file)
{
    struct customer cust;
    fseek(file, 0, SEEK_SET);
    printf("Printing all customer data:\n");
    while (fread(&cust, sizeof(struct customer), 1, file) == 1)
    {
        printf("Account Number: %d, Name: %s, Balance: %.2f\n", cust.accno, cust.name, cust.balance);
    }
}
void deleteAllData(FILE *file)
{
    fclose(file);
    file = fopen("CUSTOMER.DAT", "wb");
    fclose(file);
    printf("All data deleted successfully!\n");
}
void changeData(FILE *file)
{
    int accno;
    struct customer cust;
    printf("Enter Account Number to change data: ");
    scanf("%d", &accno);
    if (!doesAccountExist(file, accno))
    {
        printf("Account with the given number does not exist.\n");
        return;
    }
    fseek(file, 0, SEEK_SET);
    while (fread(&cust, sizeof(struct customer), 1, file) == 1)
    {
        if (cust.accno == accno)
        {
            printf("Enter new data for the account:\n");
            printf("Name: ");
            scanf("%s", cust.name);
            printf("Balance: ");
            scanf("%f", &cust.balance);
            fseek(file, -sizeof(struct customer), SEEK_CUR);
            fwrite(&cust, sizeof(struct customer), 1, file);
            printf("Data for account %d changed successfully!\n", accno);
            return;
        }
    }
}
int main()
{
    FILE *customerFile, *transactionFile;
    struct customer cust;
    struct trans transaction;
    customerFile = fopen("CUSTOMER.DAT", "r+b");
    if (customerFile == NULL)
    {
        printf("Error opening CUSTOMER.DAT file.\n");
        exit(1);
    }
    transactionFile = fopen("TRANSACTIONS.DAT", "r+b");
    if (transactionFile == NULL)
    {
        printf("Error opening TRANSACTIONS.DAT file.\n");
        fclose(customerFile);
        exit(1);
    }
    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Enter new customer data\n");
        printf("2. Enter transactions (Credit/C or Withdrawal/W)\n");
        printf("3. Print all customer data\n");
        printf("4. Delete all data\n");
        printf("5. Change data for a specific account number\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enterCustomerData(customerFile);
            break;
        case 2:
            processTransactions(customerFile, transactionFile);
            break;
        case 3:
            printAllCustomerData(customerFile);
            break;
        case 4:
            deleteAllData(customerFile);
            break;
        case 5:
            changeData(customerFile);
            break;
        case 6:
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
        while (getchar() != '\n')
            ;
    } while (choice != 6);
    fclose(customerFile);
    fclose(transactionFile);
    return 0;
}