class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> shash(26);
        vector<int> thash(26);
        if (s.length() != t.length())
            return false;
        for (int i = 0; i < s.length(); i++) {
            shash[s[i] - 'a']++;
            thash[t[i] - 'a']++;
        }

        return equal(shash.begin(), shash.end(), thash.begin());
    }
};