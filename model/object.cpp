#include "object.hpp"
#include <iostream>


Object::Object() : name_("untitled"), pos_(0,0) {}
Object::Object(const std::string& name, const int x, const int y) : name_(name), pos_(x, y) {}

void Object::setName(const std::string& name)
{
    name_ = name;
}
std::string Object::getName() const
{
    return name_;
}

void Object::setPosition(const Position& pos)
{
    pos_ = pos;
}
Object::Position Object::getPosition() const
{
    return pos_;
}

void Object::draw() const
{
    std::cout << "{MODEL} Drawing Object\n";
}