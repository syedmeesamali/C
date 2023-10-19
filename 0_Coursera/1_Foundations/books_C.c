/* C Programming
You just started learning a new language and decide to buy a few books to practice. Thankfully you
quickly find a book seller who offers every book for the same low fixed price. You have a certain
amount of money and you would like to know how many books of the same price you can purchase.

Please write a C-program that starts by reading the amount of money you have (which may be a double),
then reads the price per book (which again may be a double). The program should then display an integer,
namely the largest number of books that you can purchase with the given amount of money.
Input: 48.0, 3.5
Output: 13
*/
#include <stdio.h>
int main(void)
{
    double money = 0;
    double price = 0;
    int can_buy = 0;
    scanf("%lf", &money);
    scanf("%lf", &price);
    can_buy = (int) (money / price);
    //Below is ROUND-UP option
    //can_buy = (int) ((money + (price - 1)) / price);
    printf("%d", can_buy);
    return 0;
}
