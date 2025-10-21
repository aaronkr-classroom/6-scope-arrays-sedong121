#include <stdio.h>

void Test() {
	static int result = 0;
	printf("%d", result++);
}

int main() {
	for (int i = 0; i < 5; i++) Test();

	return 0;
}