#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_point.h"
#include "box_edge.h"
#include "box_box_width.h"
#include "box_box_height.h"


//forward declaration
namespace BoxPrimitive
{
    class Point;
    class Edge;
}

namespace BoxPrimitive
{
    class Box
    {
    public:
        Box( Data& data);

        Width width;
        Height height;


        void anchor( Point& point);
        void anchor( Edge& edge);

    private:
        Data& data;    
    };
}