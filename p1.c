#include<stdio.h>
int twoSum(int nums[], int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j])==target){
                printf("[%d,%d]",i,j);
                return 0;
            }
        }
    }
}
int main(){
    int numsSize=9;
    int nums[]={1,2,3,4,5,6,7,8,9};
    twoSum(nums,numsSize,6);
    return 0;

}