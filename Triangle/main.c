//
//  main.c
//  Triangle
//
//  Created by Guwanjith Tennekoon on 8/9/14.
//  Copyright (c) 2014 GT. All rights reserved.
//

#include <stdio.h>

float remainingAngle(angleA, angleB)
{
    float angleToReturn = 180 - (angleA + angleB);
    return angleToReturn;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third andle is %.2f\n", angleC);
    return 0;
}

