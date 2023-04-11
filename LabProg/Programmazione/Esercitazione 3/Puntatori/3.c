#include <stdio.h>

int lock(int *p);
int unlock(int *p);

int main(){
	int a = 1, r;

	r = lock(&a);
	printf("esito operazione: %d\n", r); // stamperà 1

	r = lock(&a);
	printf("esito operazione: %d\n", r); // stamperà 0

	r = unlock(&a);
	printf("esito operazione: %d\n", r); // stamperà 1

	r = lock(&a);
	printf("esito operazione: %d\n", r); // stamperà 1

	return 0;
}

int lock(int* p){
	if(*p != 0){
		*p = 0;
		return 1;
	}else if(*p == 0)
		return 0;
}

int unlock(int* p){
	if(*p == 0){
		*p = 1;
		return 1;
	}else if(*p != 0);
		return 0;
}
