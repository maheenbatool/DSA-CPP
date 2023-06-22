class Solution {
public:
    int strStr(string haystack, string needle) {
        string temp = "";
        for(int i=0;i<haystack.size();i++){
            temp+=haystack[i];
            if(temp == needle){
                int res = (needle.size()-i-1);
                return abs(res);
            }
            else if(temp.size() == needle.size())
                temp.erase(temp.begin(),temp.begin()+1);
        }
        return -1;
    }
};
