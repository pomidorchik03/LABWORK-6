#include "object.hpp"
#include <iostream>


Object::Object() : vertex() ,name_("untitled"), center_(0,0) {}
Object::Object(const std::string& name, const int x, const int y) : vertex(), name_(name), pos_(x, y) {}

void Object::setName(const std::string& name)
{
    name_ = name;
}
std::string Object::getName() const
{
    return name_;
}

void Object::setPosition(const Position& center)
{
    center_ = center;
}
Object::Position Object::getPosition() const
{
    return center_;
}

void Object::draw() const
{
    std::cout << "{MODEL} Drawing Object\n";
}
