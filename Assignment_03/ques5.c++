#include <bits/stdc++.h>
using namespace std;
void findTriplets(int arr[], int n, int sum){
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] == sum) {
					cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
				}
			}
		}
	}
}
int main()
{
	int arr[] = { 0, -1, 2, -3, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findTriplets(arr, n, -2);
	return 0;
}

