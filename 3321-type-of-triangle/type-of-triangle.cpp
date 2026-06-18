class Solution {
public:
    string triangleType(vector<int>& nums) {
        string side = "" ; 
        if (nums[0] + nums[1] <= nums[2] || nums[0] + nums[2] <= nums[1] || nums[1] + nums[2] <= nums[0]){
            return "none" ; 
        }
        if(nums[0]== nums[1] && nums[1] == nums[2]){
            side = "equilateral" ;
        }
        else if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]){
            side = "isosceles" ; 
        } 
        else  {
            side = "scalene";
        }

        return side ; 

        
    }
};