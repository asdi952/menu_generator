#pragma once

#include "../pre/glob_1.h"
#include "box_types.h"

namespace BoxPrimitive
{
    class DataPoint
    {
    public:
        DataPoint( Point_Type type);
        Vec2< int> points;
        Point_Type type;
    };

    class Data
    {
    public:
        Data();
        
        DataPoint& getPoint( Point_Type);
        DataPoint& getFirstPoint( Edge_Type);
        DataPoint& getSecondPoint( Edge_Type);
    private:
       DataPoint points[4];
        
    };
}