#include <stdio.h>
#define MAXSTR 500
int main() {
    char str[MAXSTR];
    char diff = 'a' - 'A'; //a diferença é 32
    while (fgets(str, MAXSTR, stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; ++i) {
            if ((str[i] >= 'A') && (str[i] <= 'Z'))
                printf("%c", str[i] + diff);
            else
                printf("%c", str[i]);
        }
    }

	printf("Adeus!\n");
	return 0;

}
