#pragma once

#include "../pre/glob_1.h"


namespace BoxPrimitive
{
class Data
{
public:
    Data();
    
    Vec2< int>& getPoint( int);
    Vec2< int>& getFirstPoint( int);
    Vec2< int>& getSecondPoint( int);
private:
    Vec2< int> points[4];
};
}