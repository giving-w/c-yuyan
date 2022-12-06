#include<stdio.h>
int main(){
//由于阶乘后的数字过大，导致 int 类型的数据容量无法存储，因此选择 long long 类型的形式 
/*
	类型名称            字节数    取值范围
signed char           1        -128～+127
short int             2        -32768～+32767
int                   4        -2147483648～+2147483647
long int              4        -2147483648～+2141483647
long long int         8        -9223372036854775808～+9223372036854775807



long int     的简写是     long          占位符是：%ld
long long int的简写是     long long     占位符是：%lld
*/
	long long sum=0, t=1;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t*=i;
		sum+=t;
	}
	printf("%lld",sum);
	return 0;
} 

