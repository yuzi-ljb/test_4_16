#include<stdio.h>
#include<math.h>
//
//int main() {
//	int a, b, c, m = 0;
//	scanf_s("%d %d", &a, &b);
//	m = a > b ? a : b;
//	scanf_s("%d", &c);
//	m = m > c ? m : c;
//	printf("%d", m);
//	return 0;
//}
//
//int main() {
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a < 1000 && a>0) {
//		int b = sqrt(a);
//		printf("%d", b);
//
//
//	}
//	else
//		printf("亲重新输入");
//	return 0;
//}

//int main() {
//	int y = 0;
//	int x = 0;
//	scanf_s("%d", &x);
//	if (x < 1) {
//		y = x;
//		printf("%d", y);
//	}
//	else if (x < 10) {
//		y = 2*x - 1;
//		printf("%d", y);
//	}
//	else {
//		y =  3* x - 11;
//		printf("%d", y);
//	}
//
//	return 0;
//}

int main() {
	int a = 0;
	int b = 0;
	int max = 0;
	if (b > a) {
		max = b;
		b = a;
		a = max;
	}

	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	int p = a * b;

	printf("因%d", p / b);
	printf("约%d", b);
	return 0;
}