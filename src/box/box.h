#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_point.h"
#include "box_edge.h"
#include "box_box.h"


class BoxClass
{
public:
    using Data = BoxPrimitive::Data;
    using Point = BoxPrimitive::Point;
    using Edge = BoxPrimitive::Edge;
    using Box = BoxPrimitive::Box;
 
    BoxClass();

    Point& getPoint( Point::Type);
    Edge& getEdge( Edge::Type);
    Box& getBox();


private:
    Data data;

    Point points[4];
    Edge edges[4];
    Box box;
};
