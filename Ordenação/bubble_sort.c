#include <stdio.h>

void bubbleMelhorado(char *item, int count)
{
    int n = 1, i, troca = 1, aux;

    while (n <= count && troca == 1)
    {
        troca = 0;
        for (i = 0; i < count - 1; i++)
        {
            if (item[i] < item[i + 1])
            {
                troca = 1;
                aux = item[i];
                item[i] = item[i + 1];
                item[i + 1] = aux;
            }
        }
        n = n + 1;
    }
}