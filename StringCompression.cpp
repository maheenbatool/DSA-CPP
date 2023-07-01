class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int cnt=1;
        char temp=chars[0];
        int i=1,j=0;
        while(i<n){
            if(chars[i]==temp){
                cnt++;
            }
            else{
                chars[j++]=temp;
                if(cnt>1){
                    int start=j;
                    while(cnt){
                        chars[j++]=(cnt%10)+'0';
                        cnt/=10;
                    }
                    reverse(chars.begin()+start,chars.begin()+j);
                    cnt=1;
                }
                temp=chars[i];
            }
            i++;
        }
        chars[j++]=temp;
        if(cnt>1){
            int start=j;
            while(cnt){
                chars[j++]=(cnt%10)+'0';
                cnt/=10;
            }
            reverse(chars.begin()+start,chars.begin()+j);
            // cnt=1;
        }
        return j;
    }
};
