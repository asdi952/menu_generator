
#include "box_point.h"

using T = BoxPrimitive::Point;

T::Point( Data& data, Type type): data( data), val( data.getPoint( (int)type)) 
{

}