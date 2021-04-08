#include<Stdio.h>
void main() {
	for (int i = 0; i < 5; i++) {
		for (int a = 4; a > i; a--) {
			printf(" ");
		}
		for (int b = 0; b <= i; b++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}