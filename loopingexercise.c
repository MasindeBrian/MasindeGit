#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;
    printf("Enter the value of your weight: ");
    scanf("%f",&weight);

    printf("Conversion of weight from Pounds to Kilograms\n");

    while(weight < 1000)
    {
    float value;
    value=weight/2.2;
    printf("%.2f pound = %.2f kilograms\n",weight,value);
    weight=weight+100;
    }
    return 0;
}
