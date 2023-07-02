class Solution {
public:
    int maxArea(vector<int>& v) {

        int i = 0;
        int n = v.size();
        int j = n - 1;
        int area = 0;

        while(j > i){
            area = max(area, min(v[i],v[j]) * abs(i - j));
            if(v[i] < v[j]) i++;
            else j--;
        }

        return area;
        
    }
};
