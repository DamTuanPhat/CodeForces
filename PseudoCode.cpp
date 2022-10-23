#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int arr[k];
    for (int j = 0; j < k; j++)
    {
        cin >> arr[j];
    }
    for (int j = 0; j < k; j++)
    {
        int n = arr[j];
        int i = 1;
        double result = (1e9) / (n + 1);
        if (result == (int)result)
        {
            printf("%.1f\n", result);
        }
        else
        {
            printf("%.3f\n", result);
        }
    }
    return 0;
}