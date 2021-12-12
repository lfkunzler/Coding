#include <iostream>
#include <vector>
#include "../inc/solution/solution.hpp"

using namespace std;

int main(void)
{
	Solution s;
	vector<int> nums;

	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);

	//vector<int> res = s.twoSumBruteForce(nums, 9);
	vector<int> res = s.twoSum(nums, 9);
	cout << nums[res[0]] << " + " << nums[res[1]] << " = " << 9 << endl;

	return 0;
}
