add_library(inputcore SHARED inputcore.h inputcore.cpp)
target_link_libraries(inputcore PRIVATE ipc)
if(MSVC)
    target_compile_definitions(inputcore PRIVATE INPUTCORE_DEFINE_PUBLIC_API)
endif (MSVC)