#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_edge.h"
#include "box_box.h"

//forward declaration
namespace BoxPrimitive
{
    class Edge;
    class Box;
}

namespace BoxPrimitive
{
    class Point
    {
    public:
        enum Type{ topleft, topright, botright, botleft};
    public:
        Point( Data& data, Type type);

        void anchor( Point& point);
        void anchor( Edge& edge);
        void anchor( Box& box);
    private:
        Data& data;
        Vec2< int>& val;
    };
}