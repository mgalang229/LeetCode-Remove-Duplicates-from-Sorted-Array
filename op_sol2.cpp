class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if((int)nums.size()==0)
            return 0;
        //create two pointers:
        //one for the current element and the other is for the next element
        vector<int>::iterator p1=nums.begin();
        vector<int>::iterator p2=p1+1;
        //run a while-loop until the next element is not equal to the last element
        while(p2!=nums.end()) {
			//if the current is not equal to the next element then
			//using 'p1', point to the next element
			//if its' equal, then continue iterating 'p2'
            if(*p1!=*p2)
                *(++p1)=*(p2++);
            else
                p2++;
        }
        return p1+1-nums.begin();
    }
};
