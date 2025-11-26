#pragma once
#include "../model/object.hpp"
#include <memory>

class View
{
public:
    View() {}
    void show(const std::shared_ptr<Object>& object) const;
    void remove(const std::shared_ptr<Object>& object) const;
};