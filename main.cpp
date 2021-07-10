#include <iostream>

class Cpolygon
{
protected:
    int _w, _h;
public:
    Cpolygon(/* args */);
    void    set_var(int w, int h)
    {
        _w = w;
        _h = h;
    }
    ~Cpolygon();
};

class Ctriangle : public Cpolygon
{
private:
    /* data */
public:
    Ctriangle(/* args */);
    int     set_area()
    {
        return (_w * _h);
    }
    ~Ctriangle();
};

Ctriangle::Ctriangle(/* args */)
{
}

Ctriangle::~Ctriangle()
{
}


Cpolygon::Cpolygon(/* args */)
{
}

Cpolygon::~Cpolygon()
{
}

int main()
{
    Ctriangle tr;
    tr.set_var(4,  5);
    std::cout << tr.set_area() << std::endl;
}