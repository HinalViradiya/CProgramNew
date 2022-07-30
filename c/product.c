
#include <stdio.h>
//#include <conio.h>

int main()
{
   
    float rate,price;
    int quantity;
    char productName[15];

    int discount;
    
    float amount,netAmount,GST;


    printf("\nEnter the Product Name:");
    scanf("%s",&productName);

    printf("\nEnter the product price : ");
    scanf("%f",&price);

    printf("\nEnter the product Quantity : ");
    scanf("%d",&quantity);


    rate  = price * quantity;
    discount = rate * 0.05;
    amount = rate - discount;
    GST = amount *0.18;

    printf("\nGST :%f",GST);
    netAmount = amount + GST;


    printf("\n------------------------------------------------Bill Report--------------------------------------------------------");
    printf("\nProduct   \tPrice\tQuantity\tRate     \tDiscount(5)\tAmount    \tGST(18)    \tBill Amount");
    printf("\n%-10s\t%-5.0f\t%-8d\t%-8.2f\t%-11d\t%-10.2f\t%-10.2f\t%-8.2f",productName,price,quantity,rate,discount,amount,GST,netAmount);


    return 0;
}