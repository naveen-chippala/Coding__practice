/*Print all subarrays with 0 sum
Given an integer array, print all subarrays with zero-sum.

For example,

Input:  { 4, 2, -3, -1, 0, 4 } Subarrays with zero-sum are { -3, -1, 0, 4 }{ 0 }
 Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } Subarrays with zero-sum are
 { 3, 4, -7 }{ 4, -7, 3 }{ -7, 3, 1, 3 }{ 3, 1, -4 }{ 3, 1, 3, 1, -4, -2, -2 }{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
Note that the problem deals with subarrays that are contiguous, i.e.,
 whose elements occupy consecutive positions in the array.*/

#include<iostream>

using namespace std;
void print_sub_zerosum(int arr[],int n){
    bool flag =true;
        for(int i=0;i<n;i++){
                int s=arr[i];

                if(s==0){
                    cout<<"{"<<arr[i]<<"}"<<endl;
                    flag=false;
                }
            for(int j=i+1;j<n;j++){
                s=s+arr[j];
                if(s==0){
                    cout<<"zero sum array are: \n{ "<<endl;
                    for(int k=i;k<=j;k++){
                        cout<<" "<<arr[k]<<" ";
                        flag=false;
                    }
                    cout<<"}"<<endl;
                }
            }
        }
        if(flag){
            cout<<"there are no zero sum  sub arrays";
        }
}
int main(){
int arr[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
int n=sizeof(arr)/sizeof(arr[0]);
print_sub_zerosum(arr,n);
return 0;
}
