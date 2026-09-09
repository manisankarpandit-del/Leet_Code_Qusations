class Solution {
public:
    bool isPalindromic(string s) {
        // if(s.size()<2) return false;
        string t = "";
        for(char ch:s){
            int n = (int)ch;
            string binary = "";
            while(n>0){
                if(n%2==0) binary+='0';
                else binary+='1';
                n/=2;
            }
            while(binary.length() < 8) {
                binary += '0';
            }
            reverse(binary.begin(), binary.end());
            t+=binary;
        }
        int i = 0;
        int j = t.size()-1;
        while(i<j){
            if(t[i]!=t[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};