class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> Roman = {
                                            {'I', 1},
                                            {'V', 5},
                                            {'X', 10},
                                            {'L', 50},
                                            {'C', 100},
                                            {'D', 500},
                                            {'M', 1000},
                                        };
        
        int num = Roman[s[s.size()-1]];
        for (int i = s.size()-2 ; i >= 0; i--)
        {
            if (Roman[s[i]] < Roman[s[i + 1]])
                num -= Roman[s[i]];
            else 
                num += Roman[s[i]];
        }

        return num;
    }
};