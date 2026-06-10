class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end() , nums2.begin() , nums2.end()) ;
        sort(nums1.begin() , nums1.end()) ; 
        
        int j = -1 ; 
        float median = 0 ; 
        if(nums1.size() % 2 == 0){
            j = nums1.size() / 2;
            median = (nums1[j-1] + nums1[j])/2.0;
        }
        else{
            j = (nums1.size() / 2)  ;
            median = nums1[j];

        }

        return median ;
            
        
    }
};