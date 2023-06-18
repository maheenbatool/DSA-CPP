class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalSize = nums1.size() + nums2.size();
        
        // If the total size is odd, we need to find the (totalSize / 2 + 1)-th element
        // If the total size is even, we need to find both the (totalSize / 2)-th and (totalSize / 2 + 1)-th elements
        if (totalSize % 2 == 1) {
            return findKthElement(nums1, nums2, totalSize / 2 + 1);
        } else {
            int first = findKthElement(nums1, nums2, totalSize / 2);
            int second = findKthElement(nums1, nums2, totalSize / 2 + 1);
            return (first + second) / 2.0;
        }
    }
    
private:
    int findKthElement(vector<int>& nums1, vector<int>& nums2, int k) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0; // pointer for nums1
        int j = 0; // pointer for nums2
        
        while (true) {
            // Base cases
            if (i == m) {
                return nums2[j + k - 1];
            }
            if (j == n) {
                return nums1[i + k - 1];
            }
            if (k == 1) {
                return min(nums1[i], nums2[j]);
            }
            
            // Compare the k/2-th element in nums1 and nums2
            int midIdx1 = min(i + k / 2 - 1, m - 1);
            int midIdx2 = min(j + k / 2 - 1, n - 1);
            int mid1 = nums1[midIdx1];
            int mid2 = nums2[midIdx2];
            
            if (mid1 <= mid2) {
                k -= midIdx1 - i + 1;
                i = midIdx1 + 1;
            } else {
                k -= midIdx2 - j + 1;
                j = midIdx2 + 1;
            }
        }
    }
};
