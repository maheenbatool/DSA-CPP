class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(), val=1;
        vector<int> ans(n, 1); // Initialise ans with 1
        for(int i=0; i<n; i++){  // Perform prefix product and store it in ans
            ans[i] *= val;
            val *= nums[i];
        }
        val = 1;  
        for(int j=n-1; j>=0; j--){  // Perform suffix product and multiply it with prefix product in ans itself  
            ans[j] *= val;
            val *= nums[j];
        }
        return ans;
    }
};
