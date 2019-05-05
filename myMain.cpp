#include <stdio.h>
#include "basics.h"
#include "matrixOperations.h"

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

    {
        double A[2][3] = {
                        {1,2,3},
                        {4,5,6}
                        };

        // double A[] = {1,2,3,4,5,6,7};

        mat::displayMatrix(2, 3, (double *)A, mat::StorageOrder::ROW_MAJOR);
        mat::displayMatrix(3, 2, (double *)A, mat::StorageOrder::COLUMN_MAJOR);

    }

    return 0;
}
