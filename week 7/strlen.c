#include <stdio.h>
#include <string.h>

int string_length(char data[]) {
	int count = 0;
	while (data[count])count++;
	return count;
}
int main(void) {

	int data_length, str_length;
	char data[10] = { 'h', 'a', 'p', 'p', 'y', 0 };
	data_length = string_length(data);
	str_length = strlen(data);

	printf("data length = %d\n", data_length);
	printf("str length = %d\n", str_length);

	char data2[10] = { 'a', 'b', 'c', 0 };
	char result[100];
	
	printf("Result: (0)", result);
	strcpy_s(result, strlen(result), data2); // result = "abc";
	printf("Result: (cpy)", result);
	strcat_s(result, strlen(result+strlen("def")), "def"); // result = "abcdef";
	printf("Result: (cat)", result);

	return 0;
}