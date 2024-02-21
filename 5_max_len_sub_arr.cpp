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
/*You have been given three arrays A, B, and C in sorted format. By comparing all three arrays, pull the least possible range.
Note: One element should be present mandatory from every array
Example:
Input:
arr1 = {3, 6, 8, 10, 15}
arr2 = {1, 5, 12}
arr3 = {4, 8, 15, 16}
Output: (3, 5)
Input format :
The input consists of three lists, a, b, and c, where each list contains a series of integers.
The fi rst line of input represents the length of list a.
The second set of lines represents the elements of a list a.
The third line represents the length of list b.
The fourth set of lines represents the elements of list b.
The fi fth line represents the length of list c, and the sixth set of lines represents the elements of list c.
Output format :
The output is a pair of two integers representing the minimum range containing at least one element from each of the three input lists.*/

