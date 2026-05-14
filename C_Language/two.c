#include<stdio.h>

int removeElement(int* nums, int numsSize, int val)
{	
	int show = 0;
	for(int i = 0; i<numsSize; i++)
	{
		if(nums[i] !=val)
		{
			nums[show] = nums[i];
			show++;
		}
	}
	return show;
}	

int main()
{
	int nums[] = {3,2,2,3};
	int val = 3;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int newLength = removeElement(nums, numsSize, val);
	printf("移除的数组:%d\n", val);
	for(int k=0; k<newLength; k++)
	{
		printf("%d ",nums[k]);
	}
	printf("\n新数组长度: %d\n", newLength);
	return 0;
}
