class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int end = s.size()-1;
        while(st < end){
            char a = s[st];
            s[st] = s[end];
            s[end] = a;
            st++;
            end--;
        }
    }
};