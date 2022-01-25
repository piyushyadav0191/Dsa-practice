 // https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

 pair<long long, long long> getMinMax(long long a[], int n) {
     ll max=0,min=a[0];
   for(int i=0;i<n;i++)
   {
       if(a[i]>max)
           max=a[i];
       if(a[i]<min)
           min=a[i];
   }
   return make_pair(min, max);
}