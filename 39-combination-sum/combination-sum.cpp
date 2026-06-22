class Solution {
public:
    vector<vector<int>> ans;

    void solve(int idx, vector<int>& candidates,
               int target, vector<int>& curr) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        if (idx == candidates.size() || target < 0) {
            return;
        }

        curr.push_back(candidates[idx]);
        solve(idx, candidates, target - candidates[idx], curr);
        curr.pop_back();

        solve(idx + 1, candidates, target, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(0, candidates, target, curr);
        return ans;
    }
};