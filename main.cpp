#include <iostream>
#include "controller/controller.hpp"
#include "model/document.hpp"
#include "view/view.hpp"
#include "model/coloredObject.hpp"
#include "model/object.hpp"

int main()
{
    std::shared_ptr<Document> doc = std::make_shared<Document>();
    std::shared_ptr<View> view = std::make_shared<View>();
    Controller contol (doc, view);

    contol.createDoc("C:/aaaa", "LOL");
    contol.importDoc("im");


    std::shared_ptr<ColoredObject> treugolnik = std::make_shared<ColoredObject>("lol",0 ,0, 0,0,0);
    contol.createObject(std::make_shared<Object>("square", 12,10));
    contol.createObject(treugolnik);
    contol.exportDoc("imimim");

    contol.removeObject(treugolnik);
}

