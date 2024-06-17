#include <fmt/core.h>

#include <say_hello/say_hello.hpp>

void cpp_talker::say_hello(std::string name) {
  // std::cout << "Hello " << name << std::endl;
  fmt::print("Hello " + name + "\n");
}