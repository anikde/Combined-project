#include "basics.h"

float addByValue(float x, float y){
    float z; 
    z=x+y;
    return z;
}

void addByReference(float x, float y, float * const result){
   
    *result = x + y ;
    
}	
