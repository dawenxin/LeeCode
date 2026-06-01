#include<stdio.h>

int jump(int* nums, int numsSize){
	if(numsSize == 0) return 0;
	
	int steps = 0;
	int current_end = 0;
	int farthest = 0;
	for(int i =0; i< numsSize -1; i++){
		// 更新在当前步数范围内能跳到的最远位置
		if(i+nums[i] > farthest){
			farthest = i + nums[i];
		}
		
		// 如果走到了当前步数能到达的边界
		if(i == current_end){
			steps++;
			current_end = farthest;
			
			// 如果已经能到达或超过最后一个位置，提前结束
			if(current_end >= numsSize -1){
				break;
			}
		}
	}
	return steps;
}

int main(){
	int nums[] = {2,3,1,1,4};
	int size1 = sizeof(nums) / sizeof(nums[0]);
	printf("示例1输出: %d\n", jump(nums, size1));
	return 0;
}

