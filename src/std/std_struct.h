
template< class TYPE>
class Vec2
{
public:
    Vec2( int _x, int _y): x( _x), y( _y)
    {}
    Vec2()
    {}
    TYPE x, y;

    void reset( TYPE val)
    {
        x = val;
        y = val;
    }
};