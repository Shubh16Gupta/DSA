class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            if (i % 2 == 0) {

                arr.push_back(nums[i + 1]);

            } else {

                arr.push_back(nums[i - 1]);

            }
        }
        return arr;


    }
};