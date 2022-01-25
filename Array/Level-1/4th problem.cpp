 // https://practice.geeksforgeeks.org/problems/sort-the-array0055/1

 class Solution{
    public:
    vector<int> sortArr(vector<int>arr, int n){
    //Using sort from beginning to end
   sort(arr.begin(), arr.end());
   return arr;
    }
};