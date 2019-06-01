#include "matrixOperations.h"

void mat::displayMatrix(unsigned int rows, unsigned int cols, double *data, mat::StorageOrder order){
	
	// ROW_MAJOR
	if(order == mat::StorageOrder::ROW_MAJOR){
		for(unsigned int i=0; i < rows*cols; i++){
			fprintf(stdout, "%.2f ", data[i]);
			if((i+1) % cols == 0) fprintf(stdout, "\n");
		}
		return;
	}

	// COLUMN_MAJOR
	if(order == mat::StorageOrder::COLUMN_MAJOR){
		for(unsigned int j=0; j < rows; j++){
			for(unsigned int i=j; i < rows*cols; i+=rows){
				fprintf(stdout, "%.2f ", data[i]);
			}
			fprintf(stdout, "\n");
		}
	}

}

int matrixScalarMultiplier(int rows, int cols, int *dataIn[rows][cols], int *dataOut[rows][cols]){

	int i, j, s;
	printf ("Enter the number of rows and columns:");
	scanf ("%d%d",&rows,&cols);

	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			scanf ("%d", &dataIn[rows][cols])
		}
	}

	printf ("Enter the Scaler number to be Multiplied");
	scanf ("%d",&s);

	*dataOut[][]= (s) * (*dataIn[][]);

	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			printf("%d", dataOut[rows][cols]);
			
		}
		printf ("/n");
	}

}


