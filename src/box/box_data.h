#pragma once

#include "../pre/glob_1.h"
#include "box_types.h"

namespace BoxPrimitive
{
    

    class Data
    {
    public:
        class Point
        {
        public:
            Point( Point_Type type);
            Vec2< int> points;
            Point_Type type;
        };
    public:
        Data();
        
        Point& getPoint( Point_Type);
        Point& getFirstPoint( Edge_Type);
        Point& getSecondPoint( Edge_Type);

    private:
       Point points[4];
        
    };
}