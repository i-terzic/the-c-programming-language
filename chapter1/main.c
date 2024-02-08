#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(void)
{
    int fahr, celsius;
    fahr = LOWER;

    while (fahr <= UPPER)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += STEP;
    }
    return 0;
}
