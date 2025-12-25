class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        for (auto &i : s) {
            i = tolower(i);
        }

        while (left < right) {
            if (isalnum(s[left]) && isalnum(s[right])) {
                if (s[left] == s[right]) {
                    left++;
                    right--;
                }else{
                return false;
                }
            }
            else if(!isalnum(s[left])) left++;
            else if(!isalnum(s[right])) right--;
        }
        return true;
    }
};