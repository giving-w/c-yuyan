#include<stdio.h>
int main(){
//���ڽ׳˺�����ֹ��󣬵��� int ���͵����������޷��洢�����ѡ�� long long ���͵���ʽ 
/*
	��������            �ֽ���    ȡֵ��Χ
signed char           1        -128��+127
short int             2        -32768��+32767
int                   4        -2147483648��+2147483647
long int              4        -2147483648��+2141483647
long long int         8        -9223372036854775808��+9223372036854775807



long int     �ļ�д��     long          ռλ���ǣ�%ld
long long int�ļ�д��     long long     ռλ���ǣ�%lld
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

