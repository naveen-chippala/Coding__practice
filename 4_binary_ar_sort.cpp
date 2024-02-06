/*Sort binary array in linear time
Given a binary array, sort it in linear time and constant space.
 The output should print all zeros, followed by all ones.

For example,

Input:  { 1, 0, 1, 0, 1, 0, 0, 1 } Output: { 0, 0, 0, 0, 1, 1, 1, 1 }*/
#include<iostream>
using namespace std;
void sort_bin_arr(int arr[],int n){
    int count=0;
for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
}

for(int j=0;j<n;j++){
    if(j<count){
        arr[j]=0;
    }
    else{
        arr[j]=1;
    }
}
}

int main(){
int arr[]={ 1, 0, 1, 0, 1, 1,0,1,1,1,0, 0, 1};
int n=sizeof(arr)/sizeof(arr[0]);
sort_bin_arr(arr,n);
cout<<"after sorting\n";
cout<<"{ ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" , ";
}
cout<<" }";
return 0;
}
