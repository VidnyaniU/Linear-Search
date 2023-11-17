// find the number of elements in an array which contains even number of digits

#include <stdio.h>

// function to find number of digits in an element
int digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

// check if even number of digits or not
int findEven(int arr[], int n)
{
    int numberOfDigits, flag = 0;
    for (int i = 0; i < n; i++)
    {
        numberOfDigits = digits(arr[i]);
        if (numberOfDigits % 2 == 0)
            flag += 1;
    }

    return flag;
}
int main()
{
    int n = 6;
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("element %d \n", i);
        scanf("%d", &arr[i]);
    }

    int ans = findEven(arr, n);
    printf("\nNumber of elements having even number of digits is %d.\n", ans);
    free(arr);
    return 0;
}