class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int>::iterator be = nums.begin();
	    vector<int>::iterator en = nums.end();
	    vector<int> result;
	    for (auto it = be; it != en; it++)
	    {
	    	for (auto it2 = it + 1; it2 != en; it2++)
	    	{
    			if (*it + *it2 == target)
    			{
	    			result.push_back(distance(be, it));
    				result.push_back(distance(be, it2));
    			}
	    	}
    	}
	    return result;
    }
};