class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int o=0,z=0,i=0, n=nums.size(),mx=0;
        deque<int>dq;

        while(i<n)
        {
            if(nums[i]==1)
            {
               o++;
            }
            else 
            {
                if(k==0)
                {
                 mx=max(o,mx);
                 o=0;i++;
                 continue;
                }
                if(dq.size()<k)
                {
                    dq.push_back(i);
                    o++;
                }
                else
                {
                    if(!dq.empty())
                    { 
                        int first=dq.front();
                        dq.pop_front();
                        o=i-first;
                        dq.push_back(i);
                    }

                }

            }
            
            mx=max(o,mx);
            i++;
                  }
    return mx;
    }
};
