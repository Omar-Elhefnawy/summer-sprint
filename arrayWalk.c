#include <stdio.h>

int main(void){
	int arr[5] = {10,20,30,40,50};
	for (int i = 0; i < 5; i++){
		printf("value: %d   address: %p\n", *(arr + i), (void *)(arr + i));
	}
	return 0;
}


