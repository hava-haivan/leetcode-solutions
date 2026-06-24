/*
======================================= APPROACH 1: BRUTE FORCE (My Initial Thought)===============================
- Algorithm Explanation: Brute Force - Check every possible pair of numbers to find the target. 
- Time Complexity: O(N^2) - using 2 nested loops
- Space Complextiy: O(1) - no extra memory utilized
*/
class Solution
{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == complement)
                    return {i, j};
            }
        }
        return {};
    }
};

/*
=====================================APPROACH 2: OPTIMIZED============================
- Algorithm: One-Pass Hash Map (std::unordered_map).
As we iterate through the array, we check if the 'complement' (target - current_value) 
  already exists in the hash map. If it does, we return its index and the current index. 
  Otherwise, we store the current value and its index into the map for future lookups.
- Time Complexity: O(N) - We traverse the array of size N exactly once. 
  Each lookup and insertion into the unordered_map takes O(1) on average.
- Space Complexity: O(N) - In the worst case, we store up to N elements in the hash map.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> seen; 

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (seen.count(complement))
            {
                return{seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

