class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words){
            string og = s ; 
            string temp = s ;
            reverse(temp.begin(), temp.end()); 
            if(og == temp ){
                return s ; 
            }
        }
        return "";
        
    }
};