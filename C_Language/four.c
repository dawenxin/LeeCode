#include<stdio.h>

int DelElement(int* nums, int numsSize)
{
	if(numsSize <=2) return numsSize;
	int slow = 2;
	for(int i = 2; i<numsSize; i++)
	{
		if(nums[i] != nums[slow-2])
		{
			nums[slow] = nums[i];
			slow++;
		}
	}
	return slow;
}

int main()
{
	int nums[] = {1,1,1,2,2,3};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int newLength = DelElement(nums, numsSize);
	printf("新数组长度:%d\n", newLength);
	printf("新数组:");
	for(int j=0; j<newLength; j++)
	{
		printf("%d ", nums[j]);
	}
	return 0;
}
