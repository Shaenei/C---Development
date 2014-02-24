//
//  main.c
//  Degrees
//
//  Created by James Jackson on 21/02/2014.
//  Copyright (c) 2014 James Jackson. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a static variable
static float lastTemperature;

// Initialise lastTemperature to 50 degrees
static float lastTemperature = 50;

float fahrenheitFromCelsius(float cel)
{
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInF);
    printf("The last temperature converted was %f\n", lastTemperature);
    return EXIT_SUCCESS;
}

