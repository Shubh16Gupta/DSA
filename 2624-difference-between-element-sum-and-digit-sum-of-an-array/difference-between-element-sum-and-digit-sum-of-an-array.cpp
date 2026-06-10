class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int number = 0 ;
        int digit = 0 ; 
        for (int num : nums){
            number += num ;

            int temp = num ;

            while(temp > 0 ){
                digit += temp % 10 ; 
                temp /= 10 ; 
            }

        }
        return number - digit ; 

    }
};