#include <bits/stdc++.h> 
using namespace std; 
void printPattern(int n) 
{ 
    int j, k = 0; 
    for (int i=1; i<=n; i++) 
    { 
        if (i%2 != 0) 
        { 
            for (j=k+1; j<k+i; j++) 
                cout << j << "*"; 
            cout << j++ << endl; 
            k = j;     
        } 
        else
        { 
            k = k+i-1; 
            for (j=k; j>k-i+1; j--) 
                cout << j << "*"; 
            cout << j << endl;     
        } 
    } 
}  
int main() 
{ 
    int n = 5; 
    printPattern(n); 
    return 0; 
}