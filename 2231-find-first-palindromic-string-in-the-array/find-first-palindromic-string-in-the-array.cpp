class Solution {
public:
    bool isPalindrome(string s){
        int left = 0 , right = s.size()-1 ; 
        while(left<right){
            if (s[left] != s[right]){
                return false ; 
            }
            left++ ; 
            right -- ; 
        }
        return true ; 

    }
    string firstPalindrome(vector<string>& words) {
        //brute one
        // for(string s : words){
        //     string og = s ; 
        //     string temp = s ;
        //     reverse(temp.begin(), temp.end()); 
        //     if(og == temp ){
        //         return s ;
        //         break ;  
        //     }
        // }
       // return "";

        //optimal 
        for(string s : words){
            if(isPalindrome(s)){
                return s ;
            }
        }
        return "" ; 
        
    }
};