#include <bits/stdc++.h>
using namespace std;
void changeArr(int input[], int N)
{
	int newArray[N];
	copy(input, input + N, newArray);
	sort(newArray, newArray + N);
	int i;
	map<int, int> ranks;
	int rank = 1;
	for(int index = 0; index < N; index++)
	{
		int element = newArray[index];
		if (ranks[element] == 0)
		{
			ranks[element] = rank;
			rank++;
		}
	}
	for(int index = 0; index < N; index++)
	{
		int element = input[index];
		input[index] = ranks[input[index]];
	}
}
int main()
{
	int arr[] = { 10, 8, 15, 12, 6, 20, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	changeArr(arr, N);
	cout << "{";
	for(int i = 0; i < N - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[N - 1] << "}";
	return 0;
}