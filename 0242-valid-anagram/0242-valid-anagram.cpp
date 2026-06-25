class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        
        vector<int> sfreq(26, 0);
        vector<int> tfreq(26, 0);

        for (auto c : s)
        {
            sfreq[static_cast<int>(c) - 97]++;
        }

        for (auto c : t)
        {
            tfreq[static_cast<int>(c) - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (sfreq[i] != tfreq[i])
                return false;
        }
        
        return true;
    }
};