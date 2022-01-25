// https://practice.geeksforgeeks.org/problems/peak-element/1

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int index=0;
       for(int i=0; i<n;i++){
           if(arr[i]>arr[i-1]){
               index=i;
           }
       }
       return index;
    }
};