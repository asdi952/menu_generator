#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_point.h"
#include "box_edge.h"
#include "box_box_width.h"
#include "box_box_height.h"
#include "box_fd.h"

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
        void anchor( Box& Box);

    private:
        Data& data;    
    };
}