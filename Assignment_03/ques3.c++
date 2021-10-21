#include <bits/stdc++.h>
using namespace std;
void printOrder(int arr[], int n){
	sort(arr, arr + n);
	for (int i = 0; i < n / 2; i++)
		cout << arr[i] << " ";
	for (int j = n - 1; j >= n / 2; j--)
		cout << arr[j] << " ";	
}
int main()
{
	int arr[] = { 5, 4, 6, 2, 1, 3, 8, 9, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	printOrder(arr, n);

	return 0;
}
