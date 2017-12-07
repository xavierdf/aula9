#include <stdio.h>
#define MAXSTR 500
int main() {
	char str[MAXSTR];


	while (fgets(str, MAXSTR, stdin) != NULL) {

	for (int i = 0; str[i] != '\0'; ++i) {       
	printf("%c", str[i] - 1);
		
		}
	}
	return 0;
}
