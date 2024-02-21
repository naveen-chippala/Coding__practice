/*Move all zeros present in an array to the end
Given an integer array, move all zeros present in it to the end. The solution should maintain the relative order of items in the array and should not use constant space.

For example,

Input:  { 6, 0, 8, 2, 3, 0, 4, 0, 1 } Output: { 6, 8, 2, 3, 4, 1, 0, 0, 0 }
*/
#include<iostream>
using namespace std;
int moveZeroes(int arr[],int n){
    int a=0;
 for(int i=0;i<n;i++){
    if(arr[i]!=0 ){
        arr[a]=arr[i];
        a++;
    }
 }
    for(int i=a;i<n;i++){
        arr[i]=0;
    }

}

int main(){
int arr[]={6, 0, 8, 2,0,0, 3, 0, 4, 0, 1};
int n= sizeof(arr)/sizeof(arr[0]);
moveZeroes(arr,n);
//printsub_array(arr,n);
for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}
