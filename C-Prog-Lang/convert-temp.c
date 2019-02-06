#include <stdio.h>

// prints a table of fahrenheit and celsius temperatures

main()
{
    int celsius;
    // int lower, upper, step;
    for(int fahr = 0, upper = 300, step = 20; fahr <= upper; fahr += step)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
    }
}