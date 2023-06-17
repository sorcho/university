#include "header.h"

int main(){
	stack *s = NULL;

	read_from_file(&s);

	pop(&s);
	pop(&s);
	pop(&s);
	pop(&s);
	pop(&s);

	return 0;
}
