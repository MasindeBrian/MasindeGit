#include <stdio.h>

int main()
{
float distance;
printf("Enter your distance: ");
scanf("%f",&distance);

printf("CONVERSION OF DISTANCE FROM KILOMETERS TO MILES\n");

while (distance < 100)

{
float miles;
miles=distance*1.85;
printf("%.2f miles = %.2f kilometers\n",distance,miles);
distance=distance+10;
}
return 0;
}
