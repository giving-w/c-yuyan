#include<stdio.h>
#define N 1000
int main(){
	int n, i, j;
	int sum=0, x=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		int arr[N]={0};//��ÿһ��ѭ���ж��� arr �������¶��壬��ֹ���ֺ�һ�����ӱ�ǰһ���ٵ�������ӱ�������� 
		sum=0;//���¼���
		//�ж����� i �����Ӹ��������棬 
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
				arr[x] =j;
				x++;
			}
		}
		//�ж��Ƿ��뱾����ȣ�����ӡ 
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
