// https://www.beecrowd.com.br/judge/en/problems/view/2170
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int i = 1;
    double x, y, result;
    while (scanf("%lf %lf", &x, &y) != EOF)
    {
        result = ((y - x) * 100) / x * 1.0;
        printf("Projeto %d:\n", i);
        printf("Percentual dos juros da aplicacao: %.2lf %%\n", result);
        printf("\n");
        i++;
    }
    return 0;
}