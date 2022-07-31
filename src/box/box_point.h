#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_edge.h"
#include "box_box.h"
#include "box_types.h"
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
        using Type = Point_Type;
        
    public:
        Point( Data& data, Type type);

        void anchor( Point& point);
        void anchor( Edge& edge);
        void anchor( Box& box);
    private:
        Data& data;
        Data::Point& point;
    };
}