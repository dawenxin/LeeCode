#include<stdio.h>
#include<stdbool.h>

bool canJump(int* nums, int numsSize){
	int maxReach = 0;
	for(int i = 0; i<numsSize; i++){
		//如果当前位置无法到达
		if(i > maxReach){
			return false;
		}
		//更新最远可到达位置
		if(i + nums[i] > maxReach){
			maxReach = i + nums[i];
		}
		// 已经可以到达最后位置
		if (maxReach >= numsSize - 1) {
            		return true;
        	}
	}
	return true;
}

int main(){
	int nums1[] = {2,3,1,1,4};
	int nums2[] = {3,2,1,0,4};
	printf("%s\n", canJump(nums1,5) ? "true" : "false");
	printf("%s\n", canJump(nums2,5) ? "true" : "false");
	return 0;
}
