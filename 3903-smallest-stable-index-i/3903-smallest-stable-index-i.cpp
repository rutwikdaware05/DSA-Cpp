class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i = 0;
        int maxi=0,mini=0;
        while(i<nums.size()){
            maxi = *max_element(nums.begin(),nums.begin()+i);
            mini = *min_element(nums.begin()+i,nums.end());
            if(maxi-mini <= k){
                return i;
            }
            i++;
        }
        return -1;
    }
};