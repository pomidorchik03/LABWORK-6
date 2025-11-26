cmake_minimum_required(VERSION 3.10.0)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 1.0.${PATCH_VERSION})

project(lab VERSION ${PROJECT_VERSION})

add_executable(lab)

target_include_directories(lab PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/model
    ${CMAKE_CURRENT_SOURCE_DIR}/controller
    ${CMAKE_CURRENT_SOURCE_DIR}/view
)


target_sources(lab PRIVATE
    main.cpp 
    model/coloredObject.cpp 
    model/object.cpp 
    model/document.cpp 
    controller/controller.cpp 
    view/view.cpp 
)


target_compile_features(lab PRIVATE cxx_std_20)


if (MSVC)
    target_compile_options(lab PRIVATE
        /W4
    )

else ()
    target_compile_options(lab PRIVATE
        -Wall -Wextra -pedantic 
    )

endif()

install(TARGETS lab RUNTIME DESTINATION bin)

if(UNIX)
    set(CPACK_GENERATOR "DEB")
else ()
    set(CPACK_GENERATOR "ZIP")
endif()


set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)
