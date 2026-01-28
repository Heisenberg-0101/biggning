#include <stdio.h>

int main() {
    int r, h, i, j;
    printf("Enter radius and height: ");
    if (scanf("%d %d", &r, &h) != 2) return 0;

    int width = 2 * r;         /* columns for top/bottom */
    /* top */
    for (j = 1; ; j++) printf("* ");
    printf("\n");

    /* sides (h rows) */
    for (i = 1; i <= h; i++) {
        printf("* ");          /* left edge */
        for (j = 1; j <= width - 2; j++) printf("  "); /* hollow interior */
        if (width > 1) printf("* "); /* right edge */
        printf("\n");
    }

    /* bottom */
    for (j = 1; j <= width; j++) printf("* ");
    printf("\n");

    return 0;
}