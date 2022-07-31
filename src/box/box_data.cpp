
#include "box_data.h"

using T1 = BoxPrimitive::DataPoint;

T1::DataPoint( Point_Type type): type( type)
{}



using T = BoxPrimitive::Data;

T::Data(): points()
{
    for( auto& p : points) 
    {
        p.reset(0);
    }
}

Vec2< int>& T::getPoint( int num)
{
    return points[ num];
}

Vec2< int>& T::getFirstPoint( int num)
{
    return points[ num];
}
Vec2< int>& T::getSecondPoint( int num)
{
    int val = 0;
    switch(num)
    {
        case 0:
            val = 1; break;
        case 1:
            val = 2; break;
        case 2:
            val = 3; break;
        case 3:
            val = 0; break;
    
        default:
            val = 0; break;
    }   

    return points[ val];
}