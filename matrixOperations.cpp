#include "matrixOperations.h"
#include "basics.h"

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

void matrixScalerMultiplier(int rows, int cols, int s, double *dataIn ){

	int i,j;
	
	/*matrix is multiplied with a Scaler value
	also the output matrix will be printed in this loop
	*/

	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			*(dataIn+i*rows+j) = s * (*(dataIn+i*rows+j));
		

			printf("%0.3f\t", *(dataIn+i*rows+j));
			
		}
		printf ("\n");
		
	}
	
}
	





