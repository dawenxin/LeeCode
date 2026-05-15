#include<stdio.h>
int merge(int* nums1, int m, int nums1Size, int* nums2, int n, int nums2Size)
{
	int p1 = m -1;
	int p2= n-1;
	int k = m+n-1;
	while(p1>=0 && p2>=0)
	{
		if(nums1[p1] >nums2[p2])
		{
			nums1[k] = nums1[p1];
			p1--;
		}
		else
		{
			nums1[k] = nums2[p2];
			p2--;
		}
		k--;
	}
	while(p2>=0)
	{
		nums1[k] = nums2[p2];
		p2--;
		k--;
	}
	printf("合并后的数组: ");
	for(int i=0; i<n+m;i++)
	{
		printf("%d\t",nums1[i]);
	}
}
		

int main()
{
	int nums1[] = {1,2,3,0,0,0};
	int m = 3;
	int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
	int nums2[] = {2,5,6};
	int n =3;
	int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
	merge(nums1, m, nums1Size, nums2, n, nums2Size);
	return 0;
}
