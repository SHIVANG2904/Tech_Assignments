#include<iostream>
using namespace std;
int main()
{
    int n;
    printf(" Enter n: ");
    scanf(" %d", &n);
    for(int i=0; i<n-1; i++)
    {
        if(i > 0) printf("%*c", i, ' ');
        printf("%d", i+1);
        printf("%*c", 2*n-3-2*i, ' ');
        printf("%d\n", i+1);
    }
    printf("%*c%d\n", n-1, ' ', n);
    int k=0;
    for(int i=n-1; i>0; i--)
    {
        if(i > 1) printf("%*c", i-1, ' ');
        printf("%d", i);
        printf("%*c", n-i+k, ' ');
        k++;
        printf("%d\n", i);
    }
    return 0;
}
