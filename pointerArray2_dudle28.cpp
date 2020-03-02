#include <stdio.h>

int main() {
	char str[] = "Hello";
	char* p_str[3];
	char strTwo[3][10] = {
		"hello",
		"world",
		"hyeon jun"
	};
	printf("%s\n", str);

	for (int i = 0; i < 3; i++) {
		p_str[i] = strTwo[i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", strTwo[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p_str[i]);
	}
	return 0;
}