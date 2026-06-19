class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0 ; 
        int high = 0 ; 
        for(int num : gain){
            sum += num ; 
            high = max(high , sum) ;
        }
        return high ; 
         
        
    }
};