#define SUM(a,b,c) (nums[(a)] + nums[(b)] + nums[(c)])
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int length = nums.size();
        if (length < 3)
            return 0;
        int result = SUM(0,1,2);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < length - 2; i++){
            int left = i + 1;
            int right = length - 1;
            int sums = 0;
            while (left < right) {
                sums = SUM(i, left, right);
                if (abs(sums - target) < abs(result - target)) {
                    result = sums;
                    if (result == target)
                        return result;
                }
                if (sums < target)
                    left++;
                else
                    right--;
            }
        } 
        return result;
    }
};