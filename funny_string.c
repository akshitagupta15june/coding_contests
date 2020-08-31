#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char s[10000], r[10000];
    int times;
    scanf("%d", &times);
    for (int t = 0; t < times; t++) {
        scanf("%s", s);
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            r[i] = s[strlen(s) - i - 1];
        }
        int funny = 1;
        for (int i = 1; i < len; i++) {
            if (abs(r[i] - r[i-1]) != abs(s[i] - s[i-1])) {
                printf("Not Funny\n");
                funny = 0;
                break;
            }     
        }
        if (funny) {
            printf("Funny\n");
        }

    }

    return 0;
}
