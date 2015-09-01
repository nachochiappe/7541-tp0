// Minimal testing framework.

#include <stdbool.h>
#include <stdio.h>

#define print_test(message, test) do { \
    bool ok = (test);    \
    failure_count += !ok; \
    printf("%s... %s\n", message, ok ? "OK" : "ERROR"); } while (0)

extern int failure_count;
