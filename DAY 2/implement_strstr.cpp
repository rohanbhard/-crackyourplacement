class Solution {
public:
    int strStr(string haystack, string needle) {
        int temp=0;
        if(needle.length()== 0)
        {
            return 0;
        }
        for(int i =0; i< haystack.length() ; i++)
        {
            temp=0;
            if(haystack[i]!= needle[0]) continue;
            else {
                for(int j=0;j < needle.length() ; j++){
                    
                    if(needle[j]==haystack[i+j]) temp++;
                    else break;
                }
                if(temp==needle.length()) return i;

            }
        }
        return -1;
    }
};