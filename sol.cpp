class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          // using the concept of the prefix and the suffix multiplication.

      int n = nums.size();
      vector<int> ans(n,1);

       int left = 1; // left to right traversal.
      for(int i = 0; i<n; i++){

      ans[i] = left;
      left *= nums[i];

      }


      // right to left traversal.
      int right = 1;


     for(int i = n-1; i>=0; i--){
        ans[i] *= right;
        right  *= nums[i];
     }


     return ans;
    }
};