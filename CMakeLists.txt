cmake_minimum_required(VERSION 3.10.0)
project(lab VERSION 0.1.0 LANGUAGES C CXX)

add_executable(lab)

target_sources(lab PRIVATE
    main.cpp 
    model/coloredObject.cpp 
    model/object.cpp 
    model/document.cpp 
    controller/controller.cpp 
    view/view.cpp 
)

