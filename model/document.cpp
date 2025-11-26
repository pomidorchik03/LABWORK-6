#include "document.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

void Document::create(const std::string& path, const std::string& name) const
{
    std::cout << "{DOCUMENT} Document created\n"; 
}

void Document::out(const std::string& path) const
{
    std::cout << "{DOCUMENT} Document has been exported\n";
}

void Document::in(const std::string& path) const
{
    std::cout << "{DOCUMENT} Document importe\n";
}

void Document::add(const std::shared_ptr<Object>& object)
{
    objects_.push_back(object);
    std::cout << "{DOCUMENT} Object added\n";
}

void Document::del(const std::shared_ptr<Object>& object)
{
    objects_.erase(std::remove(objects_.begin(), objects_.end(), object), objects_.end());
    std::cout << "{DOCUMENT} Object has been deleted\n";
}