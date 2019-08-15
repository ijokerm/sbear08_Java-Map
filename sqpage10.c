#include <stdio.h>
int Partition(int arr[], int low, int high){
	int temp = arr[low];
	while (low < high){
		while (low < high&&high >= temp){
			high--;
		}
		arr[low] = arr[high];
		while (low < high&&high <= temp){
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = temp;
	return low;
}

void minK(int a[], int len, int k){
	int low = 0;
	int high = len - 1;
	int key = Partition(a, low, high);
	if (k > len || k < 1){
		printf("Error!!!\n");
	}
	else{
		while (key != k - 1){
			if (key <k - 1){
				Partition(a, key + 1, high);
			}
			if (key>k - 1){
				Partition(a, low, key - 1);
			}
		}
		for (int i = 0; i < k; i++){
			printf("%d", a[i]);
		}
		printf("\n");
	}
}
	int main2(){
		int a[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
		int len = sizeof(a) / sizeof(a[0]);
		minK(a, len, 4);
		system("pause");

}