#include "controller.hpp"

Controller::Controller(std::shared_ptr<Document> doc, std::shared_ptr<View> view) : doc_(doc), view_(view) {}

void Controller::createDoc(std::string path, std::string name) const
{
    doc_->create(path, name);
}

void Controller::exportDoc(std::string path)
{
    doc_->out(path);
}

void Controller::importDoc(std::string path)
{
    doc_->in(path);
}

void Controller::createObject(const std::shared_ptr<Object> object)
{
    doc_->add(object);
    view_->show(object);
}

void Controller::removeObject(const std::shared_ptr<Object> object)
{
    doc_->del(object);
    view_->remove(object);
}
