find_package(fmt CONFIG REQUIRED)
add_library(say_hello say_hello.cpp)
target_link_libraries(say_hello PRIVATE fmt::fmt)
