#include <iostream>
#include <vector>
#include <algorithms>


//Basic brute force solution
std::vector<int> two_sum(std::vector<int>& nums, int target) {
  for(int i=0; i<nums.size(); i++){
    for(int j=i+1; j<nums.size(); j++){
      if(nums[i] + nums[j] == target)
	return std::vector<int>({i,j});
    }
  }
  return std::vector<int>(0); //This step is not expected to execute.
}


/*
vector<int> two_sum(vector<int>& nums, int target) {
  return vector<int>(0);
}
*/

