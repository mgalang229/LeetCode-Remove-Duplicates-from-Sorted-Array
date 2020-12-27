class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        //just insert the values of 'nums' in a set
        for(auto x : nums)
            s.insert(x);
        //reset the vector
        nums.clear();
        //insert the elements in the set to the vector
        for(auto x : s)
            nums.push_back(x);
        return (int)nums.size();
    }
};
