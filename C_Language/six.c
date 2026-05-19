#include<stdio.h>

// 反转数组的指定区间
void reverse(int* nums, int start, int end)
{
	while(start < end)
	{
		int temp = nums[start];
		nums[start] = nums[end];
		nums[end] = temp;
		start++;
		end--;
	}
}

void rotate(int* nums, int numsSize, int k)
{
	k = k % numsSize;
	if(k == 0) return;

	reverse(nums, 0, numsSize -1);
	reverse(nums, 0, k-1);
	reverse(nums, k, numsSize -1);
}

int main()
{
	int nums[] = {1,2,3,4,5,6,7};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int k =3;
	printf("愿数组: ");
	for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    	}
    	printf("\n");

	rotate(nums, numsSize, k);

	printf("旋转后: ");
    	for (int i = 0; i < numsSize; i++) {
        	printf("%d ", nums[i]);
    	}
    	printf("\n");
    
    	return 0;
}
