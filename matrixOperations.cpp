#include "matrixOperations.h"

void mat::displayMatrix(unsigned int rows, unsigned int cols, double *data, mat::StorageOrder order){
	
	// ROW_MAJOR
	if(order == mat::StorageOrder::ROW_MAJOR){
		for(unsigned int i=0; i < rows*cols; i++){
			fprintf(stdout, "%.3f ", data[i]);
			if((i+1) % cols == 0) fprintf(stdout, "\n");
		}
		return;
	}

	// COLUMN_MAJOR
	if(order == mat::StorageOrder::COLUMN_MAJOR){
		for(unsigned int j=0; j < rows; j++){
			for(unsigned int i=j; i < rows*cols; i+=rows){
				fprintf(stdout, "%.3f ", data[i]);
			}
			fprintf(stdout, "\n");
		}
	}

}

int matrixScalarMultiplier(int rows, int cols, int *dataIn, int *dataOut){

	int i, j, s;
	
	scanf ("%d%d",&rows,&cols); // I need to scan the values of rows and cols under the scope of this function only i guess
	scanf ("%d",&s); // i cant scan these value from the main function nah??

	/*
	this loop the input matrix from the user after taking the number of rows and columns
	 */
	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			scanf ("%d", dataIn[i][j] );
		}
	}

	/* Here each os the element of the input matrix
	 is multiplied with a Scaler value
	*/

	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			dataOut[i][j] = s* dataIn[i][j];
		}
	}
	
	/* The output matrix will be printed using this loop*/
	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			printf("%d", *dataOut[i][j]);
			
		}
		printf ("/n");
	}

}



