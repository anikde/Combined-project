#ifndef SIMPLECODES_BASICS_H
#define SIMPLECODES_BASICS_H

/**
 * @brief adds two real numbers. returns the sum
 * 
 * @param[in] x first real number
 * @param[in] y second real number
 * @return float sum of the given numbers
 */
float addByValue(float x, float y);

/**
 * @brief adds two real numbers. stores the sum in a given variable.
 * 
 * @param[in] x first real number
 * @param[in] y second real number
 * @param[out] result sum of the given numbers
 */
void addByReference(float x, float y, float * const result);

/**
 * Enter the values for rows and columns
 * Enter the values of the matrix
 * Enter the scaler value
 * Print the output matrix
 */

int matrixScalarMultiplier(int rows, int cols, int *dataIn, int *dataOut);


#endif // SIMPLECODES_BASICS_H
