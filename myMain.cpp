#include <stdio.h>
#include "basics.h"

int main(int argc, char** argv){

    {   // test: add by value
        float a = 25.5, b = 1.0;
        float sum = addByValue(a, b);
        printf("Test: add by value: %.3f\n", sum);
    }

    {   // test: add by reference
        float p = 25.5, q = 1.0;
        float res;
        addByReference(p, q, &res);
        printf("Test: add by reference: %.3f\n", res);
    }

    return 0;
}