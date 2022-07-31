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
        
        Vec2< int>& getPoint( int);
        Vec2< int>& getFirstPoint( int);
        Vec2< int>& getSecondPoint( int);
    private:
        Vec2< int> points[4];
        
    };
}