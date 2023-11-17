// given a 2d array of i customers and their j bank accounts wealth , find out maximum wealth

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 2, n = 3;

    // allocating memory
    int **accounts = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        accounts[i] = (int *)malloc(sizeof(int) * n);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element %d ,%d :", i, j);
            scanf("%d", &accounts[i][j]);
        }
    }

    // to find maximum wealth
    int max = 0;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum += accounts[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }

    printf("Max wealth is %d.", max);

    // deallocating memory
    for (int i = 0; i < m; i++)
    {
        free(accounts[i]);
    }
    free(accounts);

    return 0;
}