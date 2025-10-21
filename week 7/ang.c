#include <stdio.h>
#include <string.h>
void encrypt(char* data, char key) {

	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}
void decrypt(char* data, char key) {

	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}



int main(void)
{
	char plaintext[] = "Hanbat National University";
	char key = 'M';

	printf("original: %s\n", plaintext);
	encrypt(plaintext, key);

	printf("Encrypt: %s\n", plaintext);
	decrypt(plaintext, key);

	printf("Decrypt: %s\n", plaintext);


	return 0;
}