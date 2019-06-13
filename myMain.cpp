#include <stdio.h>
#include "basics.h"
#include "matrixOperations.h"

int main(int argc, char** argv){

	// command line argument parsing
	for(int i=0; i<argc; i++){
		fprintf(stdout, "%s ", argv[i]);
	}
	fprintf(stdout, "\n");

	// ------------------------------

	// Mock Tests: We will create separate test modules - promise!

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
		// Matrix to be displayed (2 x 3)
		// double A[2][3] = {
		//                 {1,2,3},
		//                 {4,5,6}
		//                 };

		// Store in row major order
		double R[] = {1,2,3,4,5,6};
		mat::displayMatrix(2, 3, (double *)R, mat::StorageOrder::ROW_MAJOR);

		// store in column major order
		double C[] = {1,4,2,5,3,6};
		mat::displayMatrix(2, 3, (double *)C, mat::StorageOrder::COLUMN_MAJOR);

	}

    {
       
        double array[3][3]={1,2,3,4,5,6,7,8,9};
		//int *dataIn = &array[0][0]; 
		//int rows=3; 
		//int cols=3;
		//int dataOut [3][3];
		//int scaler=2;

	    
        matrixScalerMultiplier( 3, 3, 2, *array);
	 

    }

	return 0;
}
