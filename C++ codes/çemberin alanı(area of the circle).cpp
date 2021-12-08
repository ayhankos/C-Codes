#include <stdio.h>  // (preprocessor )

#define   PI    3.14  // PI  constant (preprocessor )

//  calculating  area of circle
int main()
{
    /* variable definition */
    float  Radius; 
    float  Area = 0;
    // get radius of circle form user  
    printf("Enter Radius :\n");
    scanf("%f",  &Radius); 
    // calculating  area of circle
    Area  =  PI  *  Radius  *  Radius;
    printf("Area  =  %f",  Area );

    return 0;

