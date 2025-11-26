#include "view.hpp"
#include <iostream>

void View::show(const std::shared_ptr<Object>& object) const
{
    std::cout << "{VIEW} ";
    object->draw();
}

void View::remove(const std::shared_ptr<Object>& object) const
{
    std::cout << "{VIEW} Object has been removed";
}