#include <stdio.h>
#include <stdlib.h>
struct student
{
	char roll_num[10];
	char name[20];
	float percentage;
};
int main()
{
	int n,i;
	struct student s[10];
	struct student*ptr = s;
	scanf("%d", &n);
	for(i = 0; i< n;i++)
	{
		scanf("%s %s %f", s[i].roll_num, s[i].name, &s[i].percentage);
	}
	ptr = (struct student *)malloc(n*sizeof(struct student));
	for(i = 0; i< n;i++)
	{
		scanf("%s %s %f", (ptr+i)->roll_num,(ptr+i)->name, &(ptr+i)->percentage);
	}
	for(i = 0; i< n;i++)
	{
		printf("%s %s %f", s[i].roll_num, s[i].name, s[i].percentage);
	}
	for(i = 0; i< n;i++)
	{
		printf("%s %s %f", (ptr+i)->roll_num,(ptr+i)->name, (ptr+i)->percentage);
	}
}
