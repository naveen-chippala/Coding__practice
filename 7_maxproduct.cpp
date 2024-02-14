/*Find the maximum product of two integers in an array
Given an integer array, find the maximum product of two integers in it.

For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.*/
#include<iostream>
using namespace std;
void max_product (int arr[],int n){
int current_prod=0,prev_prod=0,a,b;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<=i+1;j++){
            current_prod=arr[i]*arr[j];
        if(current_prod>0 && prev_prod<=current_prod){
            prev_prod=current_prod;
            a=i;
            b=j;

        }

    }

}
  cout<<"largest product is  "<<prev_prod<<"at index: ( "<<a<<", "<<b<<" )"<<endl;

}
int main(){
int arr[]={10, 2, 5, 6, -2};
int n=sizeof(arr)/sizeof(arr[1]);
max_product(arr,n);
return 0;
}
