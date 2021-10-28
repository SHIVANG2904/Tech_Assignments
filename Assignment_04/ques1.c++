#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
	int divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;
	while (n != 0) {
		int leading = n / divisor;
		int trailing = n % 10;
		if (leading != trailing)
			return false;
		n = (n % divisor) / 10;
		divisor = divisor / 100;
	}
	return true;
}
int largestPalindrome(int A[], int n)
{
	sort(A, A + n);
	for (int i = n - 1; i >= 0; --i) {
		if (isPalindrome(A[i]))
			return A[i];
	}
	return -1;
}
int main()
{
	int A[] = { 1, 232, 54545, 999991 };
	int n = sizeof(A) / sizeof(A[0]);
	cout << largestPalindrome(A, n);
	return 0;
}
