class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int idx = size-1;
        while(idx >0) {
            if(nums[idx-1] < nums[idx]) {

                int jdx = idx+1;
                while(jdx < size && nums[idx-1]< nums[jdx]) 
                    jdx++;
                swap(nums[idx-1], nums[jdx-1]);
                break;
            }
            --idx;
        }
        reverse(nums.begin()+idx,nums.end());
        return;
    }
};
