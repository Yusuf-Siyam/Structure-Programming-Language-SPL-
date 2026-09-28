#include <stdio.h>

int main() {
    char str[100], sub[50];
    int i, j, found = 0;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j])
                break;
        }

        if (sub[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;
}
