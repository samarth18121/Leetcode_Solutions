#include <bits/stdc++>
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int lo = 0, mid = 0, high = nums.size() - 1;
            while (mid <= high) {
                if (nums[mid] == 0) {
                    swap(nums, mid, lo);
                    lo++;
                    mid++;
                } else if (nums[mid] == 1) {
                    mid++;
                } else if (nums[mid] == 2) {
                    swap(nums, mid, high);
                    high--;
                }
            }
        }
    
        void swap(vector<int>& nums, int x, int y) {
            int temp = nums[x];
            nums[x] = nums[y];
            nums[y] = temp;
        }
    };