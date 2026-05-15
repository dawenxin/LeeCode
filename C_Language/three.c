#include<stdio.h>

int DeleElement(int* nums, int numsSize)
{
	int slow = 1;
	for(int i =1; i<numsSize; i++)
	{
		if(nums[i] != nums[i-1])
		{
			nums[slow] = nums[i];
			slow++;
		}
	}
	return slow;
}

int main()
{
	int nums[] = {0,0,1,1,1,2,2,3,3,4};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int newlength = DeleElement(nums, numsSize);
	printf("新数组长度:%d\n", newlength);
	printf("新数组:");
	for(int j=0; j<newlength; j++)
	{
		printf("%d ", nums[j]);
	}
	return 0;
}
