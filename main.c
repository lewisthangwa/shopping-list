#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int item, pieces;
    float price, amt,totalAmt,cash,change;
    char addAnother;

    do
    {
        system("cls");

    printf("==================\n");
    printf("  shopping list\n");
    printf("==================\n");

     printf(" items         price\n");
printf("1. Maize flour  -KES 200\n");
printf("2. Sugar        -KES 150\n");
printf("3. Cooking oil  -KES 400\n");
printf("4. Lentils      -KES 300\n");
printf("5. Soap         -KES 150\n");

    printf("enter item :\n");
    scanf("%d", &item);
    printf("enter number of pieces:\n");
    scanf("%d", &pieces);

    switch(item)
    {
        case 1: price = 200.00;
        break;
        case 2: price = 150.00;
        break;
        case 3: price = 400.00;
        break;
        case 4: price = 300.00;
        break;
        case 5: price = 150.00;
        break;
    }
    amt = price * pieces;

    printf("Amount is: %.2f\n", amt);

    totalAmt = totalAmt + amt;
    printf("Total Amount: %.2f\n",totalAmt);

    printf("add another item:(y/n) ?\n");
    addAnother = getche();

    }while(addAnother == 'y' || addAnother == 'Y');

    do
    {
      printf("cash paid:\n");
      scanf("%f",&cash);

    }while(cash < totalAmt);

    change = cash - totalAmt;
    printf("change: %.2f\n",change);


}






