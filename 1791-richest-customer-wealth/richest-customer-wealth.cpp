class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0  ;
          
        for (vector<int>& mat : accounts) {
            int temp = 0 ;
            for(int num : mat){
                temp += num ; 
            }
            sum = max(sum , temp ) ; 
        }
        return sum ; 
    }
};