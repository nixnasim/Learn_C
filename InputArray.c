#include <stdio.h>

int main()
{
    int n;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Array Value for Array No %d :", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The Value of Array No %d : %d\n",i, arr[i]);
    }

    return 0;
}