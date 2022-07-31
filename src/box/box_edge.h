#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_point.h"
#include "box_box.h"
#include "box_types.h"

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
        using Type = Edge_Type;
        
    public:
        Edge( Data& data, Type type);

        void anchor( Point& point);
        void anchor( Edge& edge);
        void anchor( Box& box);
    
    private:
        Data& data;

        DataPoint& point0;
        DataPoint& point1;
    };
}