#include<stdio.h>

// Now instead of defining variables in the main scope we will define variables globally, so that it is easy for us to modify their values without disturbing the main scope.
#define UPPER 200
#define LOWER 0
#define STEP 20

main()
{
    float celsius, fahr;

    for(celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP){
        fahr = ((9.0/5.0)*celsius) + 32.0;
        printf("%6.1f %4.0f\n", celsius, fahr);
    }
}