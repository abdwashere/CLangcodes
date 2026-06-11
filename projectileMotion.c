#include<stdio.h>
#include<math.h>

int main(){


    float x, angle;
    float tof,range,maxH;



    printf("enter initial velocity of the body: ");
    scanf("%f", &x);
    printf("enter angle of the body: ");
    scanf("%f",&angle);

    angle = angle * M_PI / 180;  // degree to radian

    tof = (2 * x * (sin(angle)))/9.8;
    range = (x * x * (sin(2* angle)))/9.8;
    maxH = (x * x * sin(angle) * sin(angle) ) / (2.0*9.8);

    printf("time of flight is: %.2f ",tof);
    printf("\nrange of projectile motion is: %.2f ", range);
    printf("\nmaximum height of body is: %.2f ",maxH);


}