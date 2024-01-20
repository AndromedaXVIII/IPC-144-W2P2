/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double priceSmall, priceMedium, priceLarge;
    int patShirtCount, salShirtCount, tomShirtCount;
    double patSubTotal, patTax;
    double salSubTotal, salTax;
    double tomSubTotal, tomTax;
    double patTotal, salTotal, tomTotal;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &priceSmall); // 17.96
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &priceMedium); // 26.96
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &priceLarge); // 35.97
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", priceSmall);
    printf("MEDIUM : $%.2f\n", priceMedium);
    printf("LARGE  : $%.2f\n\n", priceLarge);

    // Patty
    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &patShirtCount); // 6
    printf("\n");

    // Sally
    printf("Sally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &salShirtCount); // 4
    printf("\n");
    
    // Tommy
    printf("Tommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tomShirtCount); //3
    printf("\n");

    // Calculations
    ///patSubTotal = (int)(((patShirtCount * priceSmall) + 0.005) * 100);
    patSubTotal = patShirtCount * priceSmall;
    patTax = patSubTotal * TAX;
    ///patTax = (int)((patSubTotal * TAX) + 0.5);
    patTotal = patSubTotal + patTax;

    salSubTotal = salShirtCount * priceMedium;
    salTax = salSubTotal * TAX;
    salTotal = salSubTotal + salTax;

    tomSubTotal = tomShirtCount * priceLarge;
    tomTax = tomSubTotal * TAX;
    round(tomTotal = tomSubTotal * 1.13);
    

    // Printing the tabular formatted table:
    printf("Customer   Size   Price   Qty   Sub-Total   Tax        Total\n");
    printf("--------   ----   -----   ---   ---------   ---        -----\n");
    printf("Patty      %-4c   %5.2lf  %3d   %9.4lf  %9.4lf   %9.4lf\n", patSize, priceSmall, patShirtCount, patSubTotal, patTax, patTotal);
    printf("Sally      %-4c   %5.2lf  %3d   %9.4lf  %9.4lf   %9.4lf\n", salSize, priceMedium, salShirtCount, salSubTotal, salTax, salTotal);
    printf("Tommy      %-4c   %5.2lf  %3d   %9.4lf  %9.4lf   %9.4lf\n", tomSize, priceLarge, tomShirtCount, tomSubTotal, tomTax, tomTotal);
    printf("--------   ----   -----   ---   ---------   ---        -----\n");
    return 0;
}