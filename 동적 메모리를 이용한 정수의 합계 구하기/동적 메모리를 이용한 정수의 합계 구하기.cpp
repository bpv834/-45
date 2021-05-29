#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	int* arr;
	arr = NULL;

	int i;
	int sum = 0;

	printf("정수의 개수:");
	scanf_s("%d", &size);

	arr = (int*)(malloc(sizeof(int) * size));


	printf("%d개의 정수를 입력하세요", size);

	for (i = 0; i < size; i++)
		scanf_s("%d", &arr[i]);
	for (i = 0; i < size; i++) 
		sum += arr[i];
	
	printf("입력된 정수의 합계:%d", sum);
	free(arr);
	arr = NULL;

} 

