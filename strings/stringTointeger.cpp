//problem: String to Integer (atoi)
//link: https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i]==' ') i++;
        int sign=1;
        if(i<s.size() && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        long long num=0;
        while(i<s.size() && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            if(num*sign>INT_MAX) return INT_MAX;
            if(num*sign<INT_MIN) return INT_MIN;
            i++;
        }
        return num*sign;
    }
};