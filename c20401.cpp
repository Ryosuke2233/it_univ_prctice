#include<stdio.h>

struct Person {
	int age;
	double weight;
	double height;
};
int main(void) {
	struct Person prs1, prs2;

	printf("�N�����͂��Ă�������\n");
	scanf("%d", &prs1.age);

	printf("�̏d����͂��Ă�������\n");
	scanf("%lf", &prs1.weight);

	printf("�g������͂��Ă�������\n");
	scanf("%lf", &prs1.height);

	printf("�N�����͂��Ă�������\n");
	scanf("%d", &prs2.age);

	printf("�̏d����͂��Ă�������\n");
	scanf("%lf", &prs2.weight);

	printf("�g������͂��Ă�������\n");
	scanf("%lf", &prs2.height);

	printf("�N��%d,�̏d%f,�g��%f\n", prs1.age, prs1.weight, prs1.height);
	printf("�N��%d,�̏d%f,�g��%f\n", prs2.age, prs2.weight, prs2.height);

	return 0;
 }