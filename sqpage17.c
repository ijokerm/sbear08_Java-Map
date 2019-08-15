#include<stdio.h>
int judge(int num, int index){
	num = num >> index;
	return (1 & num);
}
int main3(){
	int num[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
	int sum = 0;
	int i = 0;
	int index = 0;
	int len = sizeof(num) / sizeof(int);
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < len; i++){
		sum = sum^num[i];
	}
	while ((1 & sum) == 0){
		sum = sum >> 1;
		++index;
	}
	for (i = 0; i < len; i++){
		if (judge(num[i], index)){
			num1 = num1^num[i];
		}
		else{
			num2 = num2^num[i];
		}
	}
	printf("%d,%d", num1, num2);
	system("pause");
}