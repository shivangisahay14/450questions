 void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int l=0;
        int h=n-1;
        int mid=0;
        
        while(mid<=h){
            if(nums[mid]==0){
                swap(nums[l++],nums[mid++]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[h--]);
            }
        }
        
    }
