#include "coloredObject.hpp"
#include <iostream>

ColoredObject::ColoredObject() : Object(), color_(0,0,0) {}
ColoredObject::ColoredObject(const std::string& name, const int x ,const int y, const int red, const int green, const int blue) : Object(name, x, y), color_(red, green, blue) {}

void ColoredObject::setColor(const Color& color)
{
    color_ = color;
}
ColoredObject::Color ColoredObject::getColor() const
{
    return color_;
}

void ColoredObject::draw() const
{
    std::cout << "{MODEL} Drawing Colored Object\n";
}