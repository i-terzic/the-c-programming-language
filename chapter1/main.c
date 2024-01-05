#include <stdio.h>

void main_old(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 200;
    step = 20;

    fahr = lower;

    while(fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.4f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void someFunction() 
{
    printf("Hello, world\n");
}

int old_main () {
    float fahr, celsius;
    int start, end, step;

    start = 0;
    end = 100;
    step = 20;
    celsius = start;


    while(celsius <= end)
    {
        fahr = celsius*9/(5.0) + 32;
        printf("%6.1f\t%6.2f\n", celsius, fahr);
        celsius += step;
    }
}
int main(void)

