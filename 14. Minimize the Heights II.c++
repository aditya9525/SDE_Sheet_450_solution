class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int ans=arr[n-1]-arr[0];
        int mini=arr[0];
        int maxi=arr[n-1];
        for(int i=0; i<n; i++){
            if(arr[i]-k < 0){
                continue;
            }
            mini=min(arr[0]+k, arr[i]-k);
            maxi=max(arr[i-1]+k, arr[n-1]-k);
            ans=min(ans, maxi-mini);
        }
        return ans;
    }
};
