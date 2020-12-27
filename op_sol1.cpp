class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if((int)nums.size()==0||(int)nums.size()==1)
            return (int)nums.size();
        //erase the current element in the vector if it matches the next element
        for(int i=0; i<(int)nums.size()-1;) {
            if(nums[i]==nums[i+1])
                nums.erase(nums.begin()+i);
            else
                i++;
        }
        return (int)nums.size();
    }
};
