/*
Find maximum length subarray having a given sum
Given an integer array, find the maximum length subarray having a given sum.

For example, consider the following array:

nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }target = 8  Subarrays with sum 8 are
{ -5, 5, 3, 5 }{ 3, 5 }  { 5, 3 }
 The longest subarray is { -5, 5, 3, 5 } having length 4 */
#include<iostream>
using namespace std;
int max_lensub_arr (int arr[],int n,int ele)
{
    int s=0;
    int new_size=0, end_index= -1;
    for(int i=0; i<n; i++)
    {
        s=arr[i];
        for(int j=i+1; j<n; j++)
        {
            s=s+arr[j];
            if(s==ele)
            {

                if(new_size<j-i+1)
                {
                    new_size =j-i+1;
                    end_index=j;
                }
            }
        }

    }
    cout<<"highest "<<end_index-new_size+1<<"..."<<end_index;
    return 1;
}
int main()
{
    int arr[] = {5, 6, -5, 5, 3, 5, 3, -2, 0}, ele = 8 ;
    int n=sizeof(arr)/sizeof(arr[1]);
    max_lensub_arr(arr,n,ele);
    return 0;
}
