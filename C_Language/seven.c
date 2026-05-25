#include<stdio.h>

int maxProfit(int* prices, int pricesSize){
	int min_price = prices[0];
	int max_profit = 0;
	
	for(int i=1; i<pricesSize; i++){
		if(prices[i] < min_price){
			min_price = prices[i];
		}
		
		int profit = prices[i] - min_price;
		if(profit > max_profit){
			max_profit = profit;
		}
	}
	return max_profit;
}

int main()
{
	int prices1[] = {7, 1, 5, 3, 6, 4};
	int size1 = sizeof(prices1) / sizeof(prices1[0]);
	printf("示例1 最大利润: %d\n", maxProfit(prices1, size1));

	int prices2[] = {7, 6, 4, 3, 1};
	int size2 = sizeof(prices2) / sizeof(prices2[0]);
	printf("示例2 最大利润: %d\n", maxProfit(prices2, size2));
	return 0;
}
