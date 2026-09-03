class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res = -1;
        unordered_map<int,int> mpp;
        for(int x : arr){
            mpp[x]++;
        }
        for(auto it : mpp){
            if(it.first == it.second){
                res=max(res,it.first);
            }
        }
        return res;

    }
};