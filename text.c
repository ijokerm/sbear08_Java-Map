#include"stdio.h"
int main(){
	int a = 5;
	if (a == 0){
		printf("%d", a - 10);
	}
	else{
		printf("%d", a++);
	}
	int i = 1, sum = 0;
	while (i < 10){
		sum = sum + 1;
		i++;
	}
	printf("%d,%d", i, sum);
	char arr[2][4];
	strcpy(arr, "you");
	strcpy(arr, "me");

	arr[0][3] = '&';
	printf("%s\n", arr);
	system("pause");
}