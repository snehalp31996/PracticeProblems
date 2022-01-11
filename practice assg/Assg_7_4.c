#include<stdio.h>
#include<math.h>
double FhtoCs(float fTemp) {
// Logic 
double dCel = 0.0, dcel2=0.0;
dCel = ((fTemp - 32)*5)/9;
printf("%lf\n",dCel) ;
return dCel;
}

int main() {
float fValue = 0.0; 
double dRet = 0.0;
printf("Enter temperature in Fahrenheit:"); 
scanf("%f",&fValue);
dRet = FhtoCs(fValue);
printf("Temperature in Celsius:%lf\n",dRet);
return 0; 
}
