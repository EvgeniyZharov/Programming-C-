
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, x = -4;
    while(x < 4) {
        a = (x * x + 2 * x + 2) / (x - 1);
        if (x - 1 == 0) {
            printf(" %f   НЕТ РЕШЕНИЯ\n", x);
        } else if (x >= 0) {
                printf(" %f   %f\n", x, a);
            }
        else {
            printf("%f   %f\n", x, a);
            }
        x += 0.5;
    }


    return 0;
}