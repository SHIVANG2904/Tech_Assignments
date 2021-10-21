#include<iostream>
using namespace std;
int sumPairs(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += (arr[i] + arr[j]);
        }
    }
    return sum;
}

int main()
{
    int arr[] = { 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sumPairs(arr, n);
    return 0;
}