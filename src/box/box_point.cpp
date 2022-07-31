
#include "box_point.h"

using T = BoxPrimitive::Point;

T::Point( Data& data, Type type): data( data), point( data.getPoint( type))
{

}

void T::anchor( Point& point)
{

}
void T::anchor( Edge& edge)
{

}
void T::anchor( Box& box)
{

}