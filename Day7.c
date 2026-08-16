#include <stdio.h>
int main() {
    char c;
    int case1, case2;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    case1 = (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u');

    case2 = (c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U');

    if (case1 || case2)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}