#include <bits/stdc++.h>
using namespace std;
 
int findElement(int arr[], int n)
{
    int leftMax[n];
    leftMax[0] = INT_MIN;
 
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
 
    int rightMin = INT_MAX;
 
    for (int i=n-1; i>=0; i--)
    {
        if (leftMax[i] < arr[i] && rightMin > arr[i])
             return i;
 
        rightMin = min(rightMin, arr[i]);
    }
 
    return -1;
}
 
int main()
{
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int n = sizeof arr / sizeof arr[0];
    int idx = findElement(arr, n);

    print("%d", idx);
    return 0;
}
