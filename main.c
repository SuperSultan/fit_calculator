/*  Written by: Afnan Sultan
    Date Last Modified: 7/28/18

    This program tells the user how long it takes for them to get a six pack.
    This program calculates that by letting the user enter
    their bodyweight and bodyfat%.
    is a fitness calculator
    This program allows the user to enter their current weight
    and bodyfat percentage, then does calculations.
     */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bodyweight1; //current bodyweight
  //  int bodyweight2;
    float bodyfat1; //current bodyfat%
    int bodyfat2; //goal bodyfat percentage

    printf("Enter your current bodyweight in pounds: ");
    scanf("%d", &bodyweight1);
    printf("Enter your current bodyfat%%: ");
    scanf("%f%%", &bodyfat1);

    printf("Current bodyweight in pounds: %d", bodyweight1);
    printf("\nCurrent bodyfat%%: %f%%", bodyfat1);

    float lbm;
    lbm = (bodyweight1 * (1-(bodyfat1/100)));

    printf("\nLean Body Mass before bodyweight change: %f", lbm);

    //float lbm2;
    //lbm2 = lbm1 * 0.95;
    printf("\nApproximate Lean Body Mass after weight change (5%% loss of bodyweight): %f", lbm*0.95);

    float bodyweight2; //goal bodyweight
    bodyweight2 = (lbm * 0.95) / .88;
    //.88 is 1-.12, where .12 is the bodyfat needed for a six pack!

    printf("\nNew bodyweight after weight change: %f", bodyweight2);
    // double tt6;
   // double Rate_weightloss;
   // int numberofweeks;


    //tt6 = weight1 - weight2 / Rate_weightloss/numberofweeks;
    //rate of weight loss should be between 0,5 and 1% bodyweight
    //the unit for weight loss is in weeks

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
