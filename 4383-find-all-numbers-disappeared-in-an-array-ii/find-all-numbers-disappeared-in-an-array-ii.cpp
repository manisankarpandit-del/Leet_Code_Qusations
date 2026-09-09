class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lo, int up) {
        int n = nums.size();
        unordered_set<int>s;
        for(int i = 0;i<n;i++){
            s.insert(nums[i]);
        }
        vector<int>arr;
        vector<vector<int>>ans;
        for(int i = lo;i<=up;i++){
            if(s.find(i)==s.end()) arr.push_back(i);
        }
        if(arr.size()==0) return ans;
        int start = arr[0];
        for(int i = 1;i<arr.size();i++){
            if(arr[i] != arr[i-1]+1) {
                ans.push_back({start,arr[i-1]});
                start = arr[i];
            }
        }
        ans.push_back({start, arr[arr.size()-1]});
        return ans;
    }
};