/* Dipan Nama's increment assignment, with defined and sequenced operations.
 * The original printf("%d %d %d", i, ++i, i++) has undefined behavior.
 * See ORIGINAL_ASSIGNMENT.c for the historical source; do not rely on its output.
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char **argv) {
    long start = 10;
    if (argc > 2) {
        fprintf(stderr, "Usage: increment [starting_integer]\n");
        return 1;
    }
    if (argc == 2) {
        char *end;
        errno = 0;
        start = strtol(argv[1], &end, 10);
        if (errno != 0 || end == argv[1] || *end != '\0') {
            fprintf(stderr, "Use an integer from -1000000 to 1000000\n");
            return 1;
        }
    }
    if (start < -1000000 || start > 1000000) {
        fprintf(stderr, "Use an integer from -1000000 to 1000000\n");
        return 1;
    }
    int i = (int)start;
    int j = ++i;
    int k = ++i;
    printf("prefix: j=%d k=%d i=%d\n", j, k, i);
    i = (int)start;
    j = i++;
    k = i++;
    printf("postfix: j=%d k=%d i=%d\n", j, k, i);
    puts("Unsequenced read/modifications in a single printf: undefined behavior, no predicted output.");
    return 0;
}
