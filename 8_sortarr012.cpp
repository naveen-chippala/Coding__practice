/*Sort an array of 0’s, 1’s, and 2’s
Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.

For example,

Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 } Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }
Practice this problem

A simple solution would be to perform a counting sort. We count the total number of 0’s, 1’s, and 2’s and then put them in the array in their correct order. The time complexity of this solution is O(n), where n is the size of the input. However, this requires two traversals of the array.

 We can rearrange the array in a single traversal using an alternative linear-time partition routine that separates the values into three groups:

The values less than the pivot,
The values equal to the pivot, and
The values greater than the pivot.
To solve this particular problem, consider 1 as a pivot. The following linear-time partition routine in C++, Java, and Python is similar to 3–way partitioning for the Dutch national flag problem.

*/#include<iostream>
using namespace std;
void sort_bin_arr(int arr[],int n){
    int count1=0,count2=0;
for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
}

for(int j=0;j<n;j++){
    if(j<count1){
        arr[j]=0;
    }
    else if(j<count2){
        arr[j]=1;
    }
}
}

int main(){
int arr[]={0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
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
