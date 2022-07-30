#include "box_edge.h"

using T = BoxPrimitive::Edge;

T::Edge( Data& data, Type type): data( data), point0( data.getFirstPoint( (int)type)), point1( data.getSecondPoint( (int)type))
{

}
