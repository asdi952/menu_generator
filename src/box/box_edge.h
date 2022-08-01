#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_point.h"
#include "box_box.h"
#include "box_types.h"
#include "box_fd.h"

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

        Data::Point& point0;
        Data::Point& point1;
    };
}