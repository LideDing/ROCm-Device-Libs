
#include "mathF.h"

CONSTATTR INLINEATTR float
MATH_MANGLE(copysign)(float x, float y)
{
    return BUILTIN_COPYSIGN_F32(x, y);
}
