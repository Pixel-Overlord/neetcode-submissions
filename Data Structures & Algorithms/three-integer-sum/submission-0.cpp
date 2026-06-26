 class Solution {
 public:
     vector<vector<int>> threeSum(vector<int>& nums) {
         int i,j,k;
         int n = nums.size();

         vector<vector<int>> ans;
        
         sort(nums.begin(),nums.end());

         for(int i=0; i<n; i++){
             
             // skip the repeated set, i.e. if this
             if (i>0 && nums[i] == nums[i-1])  continue;

             j = i+1, k = n - 1;

             while(j < k){
                int sum = nums[i]+ nums[j]+ nums[k];

                if (sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                   ans.push_back({nums[i], nums[j], nums[k]});
                   j++;
                   k--;                 

                    // code to update j to non-repeated positions.
                    while (j<k && nums[j] == nums[j-1])     j++;
                }
            }
         }
         return ans;
     }
 };