#include<iostream>
using namespace std;
int main(){
   int i,j,rows;
   int count;
   cout<<"Enter number of rows:"<<endl;
   cin>>rows;
   count=rows*2-1;
   for(i=0;i<=count;i++){
      for(j=1;j<=count;j++){
         if(i==j || j==count-i+1){
            cout<<i;
         }
         else{
            cout<<" ";
         }
      }
      cout<<endl;
   }
}