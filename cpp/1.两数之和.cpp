// 暴力搜索法
#include <iostream>
#include <vector>
using namespace std;
using std::vector;

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        int i,j;
//        for(i=0;i<nums.size()-1;i++)
//        {
//            for(j=i+1;j<nums.size();j++)
//            {
//                if(nums[i]+nums[j]==target)
//                {
//                   return {i,j};
//                }
//            }
//        }
//        return {i,j};
//    };
//};

// 1. Two Sum
// https://leetcode.com/problems/two-sum/description/
// 时间复杂度：O(n)
// 空间复杂度：O(n)
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int,int> record;
//        for(int i = 0 ; i < nums.size() ; i ++){
//       
//            int complement = target - nums[i];
//            if(record.find(complement) != record.end()){
//                int res[] = {i, record[complement]};
//                return vector<int>(res, res + 2);
//            }
//
//            record[nums[i]] = i;
//        }
//    }
//};


int main()
{
    vector<int> a{1,5,7,8,15,6,9};
    int b = 15;
    cout << a << endl;
    return(0);
}