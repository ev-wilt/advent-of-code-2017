#include <stdio.h>
#include <string.h>

int main() {
        
        char input[5000];
        int counter = 0;
        int index = 0;

        scanf("%4999s", input);
        for (int i = 0; i < strlen(input); ++i) {

                index = i + strlen(input) / 2;

                if (index > strlen(input) - 1) {
                        index -= strlen(input);
                }
                if (input[i] == input[index]) {
                        counter += input[i] - '0';
                }
        }

        printf("%i \n", counter);
        return 0;
}
