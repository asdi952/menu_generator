

#include "box.h"

using T = BoxClass;

T::BoxClass(): 
    points( { Point( data, Point::Type::topleft),  Point( data, Point::Type::topright),  Point( data, Point::Type::botright),  Point( data, Point::Type::botleft)}),
    edges( { Edge( data, Edge::Type::top),  Edge( data, Edge::Type::right),  Edge( data, Edge::Type::bot),  Edge( data, Edge::Type::left)}),
    box( data)
{
    printf( "asdasd");
}

T::Point& T::getPoint( Point::Type type) 
{
    return points[ type];
}
T::Edge& T::getEdge( Edge::Type type)
{
 return edges[ type];
}
T::Box& T::getBox()
{
    return box;
}   