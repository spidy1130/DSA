//problem: check one segment
//plateform:leetcode
//link: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
bool checkOnesSegment(string s) {
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] == '1' && s[i-1] == '0')
            return false;
    }
        
    return true;
}
