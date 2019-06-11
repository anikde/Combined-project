#include "basics.h"

float addByValue(float x, float y){
	return x+y;
}

void addByReference(float x, float y, float * const result){
	*result = x + y ;
}	
