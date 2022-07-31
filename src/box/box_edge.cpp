#include "box_edge.h"

using T = BoxPrimitive::Edge;

T::Edge( Data& data, Type type): data( data), point0( data.getFirstPoint( type)), point1( data.getSecondPoint( type))
{

}
