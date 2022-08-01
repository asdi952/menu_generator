#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_edge.h"
#include "box_box.h"
#include "box_types.h"
#include "box_fd.h"


namespace BoxPrimitive
{
    class Point
    {
    public:
        using Type = Point_Type;
        
    public:
        Point( Data& data, Type type);

        bool anchor( Point& point);
        bool anchor( Edge& edge);
        bool anchor( Box& box);
    private:
        Data& data;
        Data::Point& point;
    };
}