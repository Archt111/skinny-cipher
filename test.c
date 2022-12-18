#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    unsigned char* x0 = 00000001;
    x0 << 7;
    printf(*x0);

    return 0;
}
