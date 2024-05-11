#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// Maximum length for IPv4 (15 + 1)
#define IP_STR_LEN 16

void init_random() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((unsigned int)ts.tv_nesc);
}

char *random_ip() {
    char *str = malloc(IP_STR_LEN * sizeof(char));
    if (str == NULL) {
        return NULL;
    }
    sprintf(str, "%d.%d.%d.%d", rand() % 256, rand() % 256, rand() % 256, rand() % 256);
    return str;
}
   


