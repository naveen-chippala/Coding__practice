/*Check if a subarray with 0 sum exists or not
Given an integer array, check if it contains a subarray having zero-sum.

For example,

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
Output: Subarray with zero-sum exists The subarrays with a sum of 0 are:
{ 3, 4, -7 }{ 4, -7, 3 }{ -7, 3, 1, 3 }{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
Note that the problem deals with subarrays that are contiguous, i.e.,
whose elements occupy consecutive positions in the array.
*/
#include<iostream>
using namespace std;
int subarray(int arr[],int n){
  /* int a,b,c;
for(int i=0;i<n;i++ ){
     a=arr[i];
    for(int j=i+1;j<n;j++)
{
    b=arr[j];
    c=a+b;
    if(c==0){
        cout<<"zero sum occurs at index "<<i<<" , "<<j<<endl;;
    }
}
}*/
bool flag=true;
int s=0;
 for(int i= 0 ;i < n ; i ++ ){
        s=arr[i];
    for(int j = i +1; j < n ; j ++){

     s = s + arr [ j ] ;
        if(s == 0){
           cout<<"zero sum exists at "<<i<<"..."<<j<<endl;
           //return 1;
           flag=false;
        }

}


}
if(flag)
  cout<<"not exists\n";
  return 1;
}
void printsub_array(int arr[], int n){
    cout<<"printing all sub array eements"<<endl;
        for(int st=0;st<n;st++){
            for(int en=st;en<n;en++){
                for(int k=st;k<=en;k++){
                    cout<<" "<<arr[k];
                }
                cout<<endl;
            }
        }
}

int main(){
int arr[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
int n= sizeof(arr)/sizeof(arr[0]);
subarray(arr,n);
printsub_array(arr,n);
return 0;
}
