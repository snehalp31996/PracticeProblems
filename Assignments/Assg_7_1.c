#include<stdio.h>
double CircleArea(float fRadius) {
// Logic 
float fPi = 3.14;
double dArea = 0.0;

dArea = fPi * fRadius * fRadius;

return dArea;
}

int main() {
float fValue = 0.0; 
double dRet = 0.0;
printf("Enter radius:"); 
scanf("%f",&fValue);
dRet = CircleArea(fValue);
printf("Area of Circle:%0.4lf\n",dRet);
return 0; 
}