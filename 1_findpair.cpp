/*Find a pair with the given sum in an array
Given an unsorted integer array, find a pair with the given sum in it.

For example,

Input: nums = [8, 7, 2, 5, 3, 1]target = 10
 Output: Pair found (8, 2)orPair found (7, 3)
  Input: nums = [5, 2, 6, 8, 1, 9]target = 12
   Output: Pair not found
Practice this problem
*/
#include<iostream>
using namespace std;
int find_pair(int arr[],int n,int p){
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]+arr[j]==p){
                cout<<"element found at "<<i<<"and"<<j<<"positions:( "<<arr[i]<<" ,"<<arr[j]<<")"<<endl;
                return 1;//In c language no need to mention the return value
            }


        }
       }

                cout<<"Element cannot be paired"<<endl;

}
int main(){
int arr[]={1,2,3,4,5},n,p=6;
n=sizeof(arr)/sizeof(arr[0]);
find_pair(arr,n,p);
return 0;
}

