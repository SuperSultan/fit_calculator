/*  Written by: Afnan Sultan
    Date Last Modified: 7/27/18

    This program is a fitness calculator
    This program allows the user to enter their current weight
    and bodyfat percentage, then does calculations.
     */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double weight1;
    double weight2;
    double bodyfat1;
    double bodyfat2;

    printf("Enter your current weight in pounds.\n");
    scanf("%f", &weight1);
    printf("Enter your current %bodyfat.\n");
    scanf("%f", &bodyfat1);

    printf("Current weight in pounds: %f\n", weight1);
    printf("Current bodyfat%: %f\n", bodyfat1);

    double lbm1;
    lbm1 = (weight1 * (1-(bodyfat1/100)));

    printf("Lean Body Mass before weight change: %f", lbm1);



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
