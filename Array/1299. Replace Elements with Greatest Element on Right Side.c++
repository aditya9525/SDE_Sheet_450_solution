class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[n-1];
        arr[n-1]=-1;
        for(int i=n-2; i>=0; i--){
            int tempMaxi=maxi;
            maxi=max(maxi, arr[i]);
            arr[i]=tempMaxi;
        }
        return arr;
    }
};
