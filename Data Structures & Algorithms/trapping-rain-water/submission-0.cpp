 class Solution {
 public:
     int trap(vector<int>& height) {
         // calculate max left and max right boundry and their respective areas.

         int left = 0, right = height.size() - 1;
         int lmax = 0, rmax = 0;

         int area = 0;

         while (left < right) {
            lmax = max(lmax, height[left]);
            rmax = max(rmax, height[right]);

            if (lmax < rmax) {
                area += lmax - height[left];
                left++;
            }
            else {
                area += rmax - height[right];
                right--;
            }
         }

         return area;
     }
 };