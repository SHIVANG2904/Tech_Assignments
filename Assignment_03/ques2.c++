#include <iostream>
using namespace std;
int main()
{
    int arr[100], n,ctr=0;
    int i, j, k;
       cout<<"Size of an array="<<endl;
       cin>>n;
       cout<<"Array elements="<<endl;
       for(i=0;i<n;i++){
	      cin>>arr[i];
	    }
    cout<<"OUTPUT: ";
    for(i=0; i<n; i++){
        ctr=0;
        for(j=0,k=n; j<k+1; j++){ 
            if (i!=j){
		       if(arr[i]==arr[j])
                 ctr++;
            }
        }
       if(ctr==0)
           cout<<arr[i]<<" ";
    }
}