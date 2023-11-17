#include <stdio.h>
// find the element and return the index in the array
int linearS(int arr[], int target)
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 8, 6, 7};

    int ans = linearS(arr, 7);
    printf("Element found at %dth index.", ans);

    return 0;
}