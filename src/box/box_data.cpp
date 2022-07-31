
#include "box_data.h"


using T = BoxPrimitive::Data;
using T1 = T::Point;


T::Data(): points({ Point_Type::topleft, Point_Type::topright, Point_Type::botright, Point_Type::botleft,})
{
    for( auto& p : points)
    {
        p.points.reset(0);
    }
}

T1& T::getPoint( Point_Type type)
{
    return points[ type];
}

T1& T::getFirstPoint( Edge_Type type)
{
    return points[ type];
}
T1& T::getSecondPoint( Edge_Type type)
{
    int val = 0;
    switch(type)
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

//----####----####----####----####----####----####

T1::Point( Point_Type type): type( type)
{}