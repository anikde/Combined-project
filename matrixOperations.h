#include <stdio.h>

//void matrixfunctions(unsigned int r, unsigned int c, double *mat1);

namespace mat {

	// labels matrix data order
	enum class StorageOrder { ROW_MAJOR, COLUMN_MAJOR };

	/**
	 * @brief 
	 * 
	 * @param rows 
	 * @param cols 
	 * @param data 
	 * @param order 
	 */
	void displayMatrix(unsigned int rows, unsigned int cols, double *data, mat::StorageOrder order = StorageOrder::ROW_MAJOR);


}
