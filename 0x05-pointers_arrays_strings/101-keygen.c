#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

char getRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charsetSize = sizeof(charset) - 1;
    return charset[rand() % charsetSize];
}

int main(void) {
    srand(time(NULL));

    int passwordLength = 8;
    char password[passwordLength + 1];

    for (int i = 0; i < passwordLength; i++) {
        password[i] = getRandomChar();
    }

    password[passwordLength] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
