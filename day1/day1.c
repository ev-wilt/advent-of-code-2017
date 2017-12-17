#include <stdio.h>
#include <string.h>

int main() {

        char input[5000];
        int counter = 0;

        scanf("%4999s", input);
        for (int i = 0; i < strlen(input) - 1; ++i) {
                if (input[i] == input[i+1]) {
                        counter += input[i] - '0';
                }
        }

        if (input[strlen(input) - 1] == input[0]) {
            counter += input[0] - '0';
        }

        printf("%i \n", counter);
        return 0;
}
