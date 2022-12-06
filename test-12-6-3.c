#include<stdio.h>
#define N 1000
int main(){
	int n, i, j;
	int sum=0, x=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		int arr[N]={0};//在每一次循环中都将 arr 数组重新定义，防止出现后一项因子比前一项少但输出因子变多的情况； 
		sum=0;//重新计数
		//判断数字 i 的因子个数并保存， 
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
				arr[x] =j;
				x++;
			}
		}
		//判断是否与本身相等，并打印 
		if(sum==i){
			printf("%d its factors are ",i);
			for(j=0;j<x;j++){
				printf("%d ",arr[j]); 
			}
			printf("\n");
		}
		x=0;
	}
	return 0;
}
