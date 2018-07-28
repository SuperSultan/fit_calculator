/*  Written by: Afnan Sultan
    Date Last Modified: 7/28/18

    This program is a fitness calculator
    This program allows the user to enter their current weight
    and bodyfat percentage, then does calculations.
     */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight1;
    int weight2;
    float bodyfat1;
    int bodyfat2;

    printf("Enter your current weight in pounds.");
    scanf("%d", &weight1);
    printf("\nEnter your current %bodyfat.\n");
    scanf("%f", &bodyfat1);

    printf("\nCurrent weight in pounds: %d", weight1);
    printf("\nCurrent bodyfat%%: %d", bodyfat1);

    float lbm1;
    lbm1 = (weight1 * (1-(bodyfat1/100)));

    printf("\nLean Body Mass before weight change: %f", lbm1);



   //double lbm2;
   // lbm2 = lbm1 * (97/100);
    //printf("\nLean Body Mass after weight change: %f\n", lbm2);

    //weight2 = lbm2 / (1-bodyfat2/100);

    // double tt6;
   // double Rate_weightloss;
   // int numberofweeks;


    //tt6 = weight1 - weight2 / Rate_weightloss/numberofweeks;


    /*
    LBM1 = weight1 - bodyfat
    LBM1 = weight1 * (1 - bodyfat/100)

    lbm2 = lbm * (97/100)
    note: lbm2 will be less because you dont keep all your gainzzz!
    goal weight = lbm2/(1-goal_bf%)

    tt6 = weight1 - weight2 / rate_of_weight_loss per week

    */
   // return 0;
}
