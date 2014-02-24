//
//  main.c
//  Triangle
//
//  Created by James Jackson on 21/02/2014.
//  Copyright (c) 2014 James Jackson. All rights reserved.
//

#include <stdio.h>

float remainingAngle(angleA, angleB)
{
    float angleC = 180 - (angleA + angleB);
    return angleC;
}

int main(int argc, const char * argv[])
{
    float angleA = 30;
    float angleB = 60;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

