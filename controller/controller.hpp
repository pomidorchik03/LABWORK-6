#pragma once
#include "../model/document.hpp"
#include "../view/view.hpp"
#include <memory>

class Controller
{
private:
    std::shared_ptr<Document> doc_;
    std::shared_ptr<View> view_;

public:
    Controller(std::shared_ptr<Document> doc, std::shared_ptr<View> view);
    
    void createDoc(std::string path, std::string name) const;
    void exportDoc(std::string path);
    void importDoc(std::string path);

    void createObject(const std::shared_ptr<Object> object);
    void removeObject(const std::shared_ptr<Object> object);
};
