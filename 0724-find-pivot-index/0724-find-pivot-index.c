int pivotIndex(int* nums, int numsSize) {
    
     int t=0;
     int index;
     for(int i=0;i<numsSize;i++){
         int lsum=0;
        int rsum=0;
        int a =nums[i];
        for(int j=i-1;j>=0;j--){
            lsum = lsum+nums[j];
        }
        for(int k=i+1;k<numsSize;k++){
            rsum = rsum+nums[k];
        }
        if(lsum==rsum){
            return i;
        }
     }
    
        return -1;
     
    
}