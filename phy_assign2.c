// Problem 2

#include <stdio.h>
#include <math.h>
int main(){

    // Green light

    double mg=3.0, wg=530.0, angle1=65.0;
    double const pi=3.1416;
    double radian = angle1*(pi/180.0);

    double SINE = sin(radian);
    double d = (mg*wg)/SINE;

    // Red light

    double mr=2.0, wr=700.0;

    double angle_RED = asin(mr*wr/d);

    angle_RED = (angle_RED*180.0)/pi;

    printf ("The second-order bright spot will be seen for red light at angle %.2lf degree\n",angle_RED);

    return 0 ;
}

// 232-115-088 , 232-115-093 , 232-115-096 , 232-115-102
