#include <stdio.h>

union Data {
    int i;
    float f;
};

void main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 3.14;
    printf("d.f = %f\n", d.f);

    // Now d.i is overwritten by d.f's bytes
    printf("d.i (after writing f) = %d\n", d.i);

}
