#pragma once
#include <vector>
#include "object.hpp"
#include "coloredObject.hpp"
#include <memory>

class Document
{
private:
    std::vector<std::shared_ptr<Object>> objects_;

public:
    Document() {};

    void create(const std::string& path, const std::string& name) const;
    void out(const std::string& path) const;
    void in(const std::string& path) const;

    void add(const std::shared_ptr<Object>& object);
    void del(const std::shared_ptr<Object>& object);

};