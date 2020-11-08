#include <stdio.h>
#include <stdlib.h>

void main()
{
    float dollars, egp;
    printf("Welcome to USD-EGP currency converter\n");
    printf("Enter the amount of money in dollars: ");
    scanf("%f", &dollars);
    egp = dollars * 15.69;
    printf("%.2f$ are equal to %.2f Egypt pound.", dollars, egp);
}
