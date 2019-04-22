#include "basics.h"

float addByValue(float x, float y){
    int z; 
    z=x+y;
    return z;
}

void addByReference(float x, float y, float * const result){
    *res = x+y;
    return *res;
}
