// Problem 1

#include <stdio.h>
#include <math.h>
int main()
{

    double pi = 3.1416 ;
    double angle1, angle2, angle3 ;

    double w ;
    printf("Enter wavelength: ");
    scanf("%lf",&w);

    double m;
    printf("Enter m: ");
    scanf("%lf",&m);

    double a1,a2,a3 ;

    // Convert micrometer to nanometer
    a1 = a1 * 1000 ;
    a2 = a2 * 1000 ;
    a3 = a3 * 1000 ;

    if( w >= 380.00 && w <= 750.00 )
    {
        printf("Enter width of 1st slit, a1 : ");
        scanf("%lf",&a1);

        angle1 = asin((m*w)/a1);
        angle1 = angle1 * 180.0 / pi ;
        printf("1st Angle = %.2lf degree\n",angle1);

        printf("Enter width of 2nd slit, a2 : ");
        scanf("%lf",&a2);

        angle2 = asin((m*w)/a2) ;
        angle2 = angle2* 180.0 / pi ;
        printf("2nd Angle = %.2lf degree\n",angle2);

        printf("Enter width of 3rd slit, a3 : ");
        scanf("%lf",&a3);

        angle3 = asin((m*w)/a3) ;
        angle3 = angle3* 180.0 / pi ;
        printf("3rd Angle = %.2lf degree\n",angle3);

        if( angle1 <= 90.00 && angle2 <= 90.00 && angle3 <= 90.00 )
        {
            if( angle1 > angle2 && angle1 > angle3 )
                printf("1st slit bends the light most.\n");


            if( angle2 > angle1 && angle2 > angle3 )
                printf("2nd slit bends the light most.\n");


            if( angle3 > angle1 && angle3 > angle2 )
                printf("3rd slit bends the light most.\n");

        }

    }
    else
        printf("Out of the range. Please enter a valid number.\n");

    return 0;
}

// 232-115-088 , 232-115-093 , 232-115-096 , 232-115-102
