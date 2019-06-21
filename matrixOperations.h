#include <stdio.h>


void matrixScalerMultiplier(int rows, int cols,int scaler, double *dataIn);
namespace mat {

	// labels for matrix data order
	enum class StorageOrder { ROW_MAJOR, COLUMN_MAJOR };

	/**
	 * @brief Dislays matrices upto 3 decimal places for both row major and column major formats.
	 * 
	 * @param rows rows of matrix
	 * @param cols columns of matrix
	 * @param data pointer to the first element of a double array
	 * @param order storage order - row major (default) or column major 
	 */
	void displayMatrix(unsigned int rows, unsigned int cols, double *data, mat::StorageOrder order = mat::StorageOrder::ROW_MAJOR);

	/* 
	 * @displays a matrix multiplied with a scaler number 
	 * @param r as rows
	 * @param c as columns
	 * @param s as scaler value 
	 * @param mat pointing towards the first element of double array
	 * @param order storage order- row major 
	 */

	void ScalerMultiplierMatrix(unsigned int , unsigned int, unsigned int , double * , mat::StorageOrder order = mat ::StorageOrder::ROW_MAJOR );  

}
