#include <stdio.h>
struct node
{
	int i;
	char c;
	struct node* ptr;
};

int main()
{
	struct node V1;
	struct node V2;
	V1.i = 65;
	V1.c = 'M';
	V1.ptr = NULL;
	V2.i = 45;
	V2.c = 'N';
	V2.ptr = NULL;
	V1.ptr = &V2;
	printf("%d %c", V1.ptr->i, V1.ptr->c);
}
