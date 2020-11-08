#include <stdio.h>
#include <math.h>
int main(void)
{ 
    double value, result;
    printf("Please enter input x between (0, 1): ");
    scanf("%lf\n", &value);
    result = sin(value);
    printf("sin(%lf) = %lf\n", value, result);

    return 0;
}