#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, b, c, menor, maior;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b)
    {
        if (a < c)
            menor = a;
        else
            menor = c;
    }
    else
    {
        if (b < c)
            menor = b;
        else
            menor = c;
    }

    if (a > b)
    {
        if (a > c)
            maior = a;
        else
            maior = c;
    }
    else
    {
        if (b > c)
            maior = b;
        else
            maior = c;
    }

    printf("\tMenor: %d\tMaior: %d\n", menor, maior);
}
