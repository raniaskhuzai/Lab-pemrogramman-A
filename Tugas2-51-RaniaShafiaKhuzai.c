#include <stdio.h>

int payment(int total_expense, int money, int change, int strapped, int additional_money)
{
    if(money >= total_expense)
      {
          change=money - total_expense;
          printf("\t\t\tChange\t\t\t: %d", change);
      }

    if(money < total_expense)
      {
          //strapped = uang yang kurang
          strapped = total_expense - money;

    printf("\n\t\t\tStrapped\t\t: %d\n", strapped);
    printf("\t\t\tenter additional money\t\t: ");
    scanf("%d", &additional_money);
    change= additional_money - strapped;
    printf("\t\t\tchange\t\t\t: %d", change);
  }

  return change;
}


int option1()
{
  printf("\t\t\t+------------------------------------------+\n");
  printf("\t\t\t| no  | item name        |     price       |\n");
  printf("\t\t\t+------------------------------------------+\n");
  printf("\t\t\t|  1  | UNO              |      135000     |\n");
  printf("\t\t\t|  2  | playing cards    |      56000      |\n");
  printf("\t\t\t|  3  | tomica           |      89000      |\n");
  printf("\t\t\t|  4  | jenga            |      228000     |\n");
  printf("\t\t\t|  5  | Barbie           |      200000     |\n");
  printf("\t\t\t|  6  | gameboy          |      630000     |\n");
  printf("\t\t\t|  7  | nerf gun         |      300000      |\n");
  printf("\t\t\t+------------------------------------------+\n");
  printf("\t\t\tpress enter for the next item.....");
  getchar();
  printf("\n");
}

int main()
{
    //1. Deklarasi variabel dan struct
      int no_item, amount_of_item, choice, amount, i, money, change, strapped, additional_money;
      int total_item=0;
      char answer;

    typedef struct Menu
    {
      int no_item;
      int item_price;
      char *item_name;
    } Mn;
    Mn menu[6];

    menu[0].no_item= 1; menu[0].item_name= "UNO"; menu[0].item_price= 135000;
    menu[1].no_item= 2; menu[1].item_name= "playing cards"; menu[1].item_price= 56000;
    menu[2].no_item= 3; menu[2].item_name= "tomica"; menu[2].item_price= 89000;
    menu[3].no_item= 4; menu[3].item_name= "jenga"; menu[3].item_price= 228000;
    menu[4].no_item= 5; menu[4].item_name= "Barbie"; menu[4].item_price= 200000;
    menu[5].no_item= 6; menu[5].item_name= "gameboy"; menu[5].item_price= 630000;
    menu[6].no_item= 7; menu[6].item_name= "nerf gun"; menu[6].item_price= 300000;

    //1a. Beranda
    printf("\t\t\t+===========================================================+\n");
    printf("\t\t\t|                          TOY SHOP                         |\n");
    printf("\t\t\t+===========================================================+\n");
    printf("\t\t\t******************SELAMAT DATANG DI CATSHOP******************\n");

    do
    {
        printf("\n");
        printf("\t\t\t1. Menu\n");
        printf("\t\t\t2. Payment\n");
        printf("\t\t\t3. Exit\n");

        printf("\t\t\tenter your item of choice: "); scanf("%d", &choice);
        while(choice < 1 || choice > 3)
        {
            printf("\t\t\tyour item of choice is incorrect\n");
            printf("\t\t\tenter your choice of item: "); scanf("%d", &choice);
        }

    //2. User choose
      //2a. User chooses from the first menu. output would be menu table.
        if(choice==1)
            option1();

      //2b. User choose again - order&payment

        if(choice==2)
        {
          do
          {
              printf("\t\t\tenter the number of the item that you'll buy : "); scanf("%d", &no_item);
              while(no_item < 1 || no_item > 7)
              {
                  printf("\t\t\tenter the number of the item that you'll buy: "); scanf("%d", &no_item);
              }
              printf("\t\t\tenter the amount of the item that you'll buy: "); scanf("%d", &amount_of_item);
              amount= amount_of_item * menu[no_item - 1].item_price;
              total_expense = total_expense + amount;

              printf("\n\n\t\t\tWould you want to buy anything else (y/n)?: ");
              scanf("%c", &answer);

              while(answer!='y' && answer!='n')
              {
                  printf("\t\t\tthe character you entered is incorrect\n");
                  printf("\n\n\t\t\tWould you want to buy anything else (y/n)?: ");
                  scanf("%c", &answer);

              }
              printf("\n");
          }
           while(answer=='y');

          printf("\n\t\t\tyour total would be\t: %d", total_expense);
          printf("\n\t\t\tenter your money         : ");
          scanf("%d", &money);
          payment(total_expense, money, change, strapped, additional_money);
          break;
        }

        if(choice==3)
        {
          break;
        }

    //3. Menu exit
    } while(getchar());

    return 0;
}
