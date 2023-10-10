#include <stdio.h>
#include <string.h>

struct InventoryData
{
    int p_id;
    char p_name[250];
    double p_price;
    double total;
};
struct InventoryData ID[20];

/*========================================================*/

void passCheck()
{
    char u_name[100];
    char pwd[100];
    char uname = 'Admin';
    char pass = '123';
    printf("Enter Username: ");
    scanf("%s", &u_name);
    printf("Enter Password: ");
    scanf("%s", &pwd);
    if (u_name != uname && pass != pwd)
    {
        printf("Authentication Successful!\n");
        setDataInventory();
    }
    else
    {
        printf("Authentication Fail!\n");
    }
}
/*==============================================================*/
void setDataInventory()
{
    int lim;
    int Ip_id;
    char Ip_name[250];
    double Ip_price;
    double Itotal;
    int choice2;
    int sum = 0;
Add:
    printf("Enter The Number of Stock You Want to Add: ");
    scanf("%d", &lim);

    for (int i = 0; i < lim; i++)
    {
        printf("Product ID: ");
        scanf("%d", &Ip_id);
        ID[i].p_id = Ip_id;
        printf("Product Name: ");
        scanf("%s", &Ip_name);
        strcpy(ID[i].p_name, Ip_name);
        printf("Product Price: ");
        scanf("%d", &Ip_price);
        ID[i].p_price = Ip_price;
        ID[i].p_id;
    }
    // fflush(stdin);
    printf("Do You Want to Add More Items to Inventory");

    printf("\n1. Yes");
    printf("\n2. No, Go to Report\n");

    printf("Enter Your Choice: ");
    scanf("%s", &choice2);

    switch (choice2)
    {
    case '1':
        goto Add;

        break;

    case '2':
        printf("\t==================Inventory Data==================\n");
        printf("\tProduct ID \t Product Name \t Product Price\n");
        printf("\t==================================================\n");
        for (int i = 0; i < lim; i++)
        {

            printf("\t\t%d \t %s \t\t %d\n", ID[i].p_id, ID[i].p_name, ID[i].p_price);
        }

        break;

    default:

        break;
    }
}

/*==========================================================================*/
int main()
{

    char choice;
menu1:
    printf("\n");

    printf("\tWelcome to Inventory Management System\n");

    printf("========================================================\n");

    printf("\n1. Login");
    printf("\n2. Exit\n");

    printf("Enter Your Choice: ");
    scanf("%s", &choice);

    switch (choice)
    {
    case '1':
        passCheck();

        break;

    case '2':
        return 0;

        break;
    default:
        goto menu1;
        break;
    }

    return 0;
}