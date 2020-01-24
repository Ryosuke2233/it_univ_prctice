#include<stdio.h>

struct Person {
	int age;
	double weight;
	double height;
};
int main(void) {
	struct Person prs1, prs2;

	printf("年齢を入力してください\n");
	scanf("%d", &prs1.age);

	printf("体重を入力してください\n");
	scanf("%lf", &prs1.weight);

	printf("身長を入力してください\n");
	scanf("%lf", &prs1.height);

	printf("年齢を入力してください\n");
	scanf("%d", &prs2.age);

	printf("体重を入力してください\n");
	scanf("%lf", &prs2.weight);

	printf("身長を入力してください\n");
	scanf("%lf", &prs2.height);

	printf("年齢%d,体重%f,身長%f\n", prs1.age, prs1.weight, prs1.height);
	printf("年齢%d,体重%f,身長%f\n", prs2.age, prs2.weight, prs2.height);

	return 0;
 }