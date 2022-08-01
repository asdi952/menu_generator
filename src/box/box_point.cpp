
#include "box_point.h"

using T = BoxPrimitive::Point;

T::Point( Data& data, Type type): data( data), point( data.getPoint( type))
{

}

bool T::anchor( Point& point)
{

}
bool T::anchor( Edge& edge)
{

}
bool T::anchor( Box& box)
{

}