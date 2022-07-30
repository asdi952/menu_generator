#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_point.h"
#include "box_box.h"

namespace BoxPrimitive
{
    class Point;
    class Box;
}

namespace BoxPrimitive
{
    class Edge
    {
    public:
        enum Type{ top, right, bot, left};
    public:
        Edge( Data& data, Type type);

        void anchor( Point& point);
        void anchor( Edge& edge);
        void anchor( Box& box);
    
    private:
        Data& data;

        Vec2< int> point0;
        Vec2< int> point1;
    };
}