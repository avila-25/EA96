//Ávila Alberto
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100


void getInput(char phrase[]) {
    printf("Escribe una frase (máximo %d caracteres): ", MAX_LENGTH - 1);
    fgets(phrase, MAX_LENGTH, stdin);
}


void reverseString(char original[], char reversed[]) {
    int length = strlen(original);
    for (int i = 0; i < length; i++) {
        reversed[i] = original[length - i - 1];
    }
    reversed[length] = '\0';
}

int main() {
    char original[MAX_LENGTH];
    char reversed[MAX_LENGTH];
    getInput(original);
    reverseString(original, reversed);

    printf("Original: %s\n", original);
    printf("Invertida: %s\n", reversed);

    return 0;
}
