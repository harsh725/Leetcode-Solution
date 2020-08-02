class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		return (lower_bound(nums.begin(), nums.end(), target) - nums.begin());
		// Buildin Function implemented on binary search
	}
};