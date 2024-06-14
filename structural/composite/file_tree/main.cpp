#include "headers/component.h"
#include "src/component.cpp"
#include <iostream>

using namespace sysfile;

int main(int argc, char *argv[]) {
  File f = File();
  std::cout << f.displayContent() << std::endl;
  Directory d = Directory();
  d.add(&f);
  std::cout << d.displayContent() << std::endl;
}
