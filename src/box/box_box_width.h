#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_box_height.h"

namespace BoxPrimitive
{
    class Height;
}

namespace BoxPrimitive
{
    class Width
    {
    public:
        Width( Data& data);

        void set( int width);
        int get();

        void anchor( Width& width);
        void anchor( Height& height);

    private:
        Data& data;
    };
}