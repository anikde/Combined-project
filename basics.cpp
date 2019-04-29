#include "basics.h"

float addByValue(float x, float y){
    int z; 
    z=x+y;
    return z;
}

float addByReference(float x, float y, float * result){
   
    *result = x + y ;
    return *result ;
}	
