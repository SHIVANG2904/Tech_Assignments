#include <iostream>
using namespace std;
int findGCD(int, int);
int main(){
    cout<<"n = ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
      cin>>arr[i];
    } 
    int gcd = arr[0];
    for(int i=1; i<=n; i++){
      gcd = findGCD(arr[i], gcd);
    }   
    cout<< gcd;
}
int findGCD(int a, int b){
    if(b == 0)
      return a;
    return findGCD(b, a%b);
}
