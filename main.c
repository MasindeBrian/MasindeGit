#include <stdio.h>

int main()

{
float temperature;
printf("Enter your temperature: ");
scanf("%f",&temperature);

printf("CONVERSION OF TEMPERATURE FROM FARENHEIT TO DEGRESS\n");

while( temperature < 100)
{
float value;
value = (temperature+32) / 9/5;
printf("%.2f farenheit = %.2f celcius\n",temperature,value);
temperature=temperature+100;
}
}