#include "check.h"

// LCOV_EXCL_START

void error(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(EXIT_FAILURE);
}

void check(const char* what, bool err) {
    if (err) {
        char errmsg[150];
        sprintf(errmsg, "invalid %s", what);
        error(errmsg);
    }
}

void check_mem_alloc(void* data) {
    if (!data) {
        error("failed to allocate memory");
    }
}

// LCOV_EXCL_STOP

void fgets_without_newline(char* dest, int n, FILE* fin) {
    fgets(dest, n, fin);
    dest[strcspn(dest, "\n")] = '\0';
}

// LCOV_EXCL_START

void clear() {
    while (getchar() != '\n');
}

// LCOV_EXCL_STOP

void tolower_str(char* str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void fputs_with_newline(const char* str, FILE* fout) {
    fputs(str, fout);
    fputs("\n", fout);
}
