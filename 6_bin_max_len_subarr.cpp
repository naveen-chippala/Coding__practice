/*Find the largest subarray having an equal number of 0�s and 1�s
Given a binary array containing 0�s and 1�s,
 find the largest subarray with equal numbers of 0�s and 1�s.

For example,

Input:  { 0, 0, 1, 0, 1, 0, 0 }
Output: Largest subarray is { 0, 1, 0, 1 } or { 1, 0, 1, 0 }
*/
#include<iostream>
using namespace std;
void printsubarray(int i,int j,int nums[]){
    cout<<"the largest subarray with equal zeores  are"<<endl;
for(int k=i;k<=j;k++){
    cout<<" "<<nums[k];
}
cout<<endl;
}
void findLargestSubarray(int nums[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
           // sum=nums[i];
            int count1=0;
            int count2=0;
            if(nums[i]==0){
                count1++;
            }
            else{
                count2++;
            }

        for(int j=i+1;j<n;j++){
        //sum+=nums[j];
        if(nums[j]==0){
                count1++;
            }
            else{
                count2++;
            }
        if(count1>=2 && count2>=2 && count1==count2&& (i+j)%2!=0){
            printsubarray(i,j,nums);
        }


        }
    }
}

int main()
{
    int nums[] = { 1, 0, 1, 1, 1, 0, 0 };
    int n = sizeof(nums) / sizeof(nums[0]);

    findLargestSubarray(nums, n);

    return 0;
}
