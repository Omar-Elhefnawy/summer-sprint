#include <stdio.h>
void swap(int *a, int *b) {
	int p = *a;
	*a = *b;
	*b = p;
	/*
		p — the value stored in p
		&p — the address of p
		*p — only valid if p is a pointer; means "the value at that address"
	*/
}
int main(void) {
    	int A = 1;
    	int B = 2;
	printf("Before: A=%d B=%d\n", A, B);
	swap(&A, &B);
	printf("Before: A=%d B=%d\n", A, B);
    return 0;
}
