#pragma once

#include "../pre/glob_1.h"
#include "box_data.h"
#include "box_box_width.h"

namespace BoxPrimitive
{
    class Width;
} 


namespace BoxPrimitive
{
    class Height
    {
    public:
        Height( Data& data);

        void set( int height);
        int get();

        void anchor( Width& width);
        void anchor( Height& height);

    private:
        Data& data;
    };
}