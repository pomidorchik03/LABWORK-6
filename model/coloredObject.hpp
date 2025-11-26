#pragma once
#include "object.hpp"

class ColoredObject : public Object
{
private:
    class Color
    {
    private:
        int red_;
        int green_;
        int blue_;
    
    public:
        Color() : red_(0), green_(0), blue_(0) {}
        Color(int red, int green, int blue) : red_(red), green_(green), blue_(blue) {};
    };
    Color color_;

public:
    ColoredObject();
    ColoredObject(const std::string& name, const int x ,const int y, const int red, const int green, const int blue);
    
    void setColor(const Color& color);
    Color getColor() const;

    void draw() const override;
};