#include "../headers/component.h"
#include <string>

using namespace sysfile;

File::File() {
  this->size = 0;
  this->content = "";
}

File::~File() {}

int File::getSize() { return this->size; }

std::string File::displayContent() { return this->displayContent(); }

std::string Directory::displayContent() {
  return this->getChild()->displayContent();
};

Component *Directory::getParent() { return this->parent; }

Component *Directory::getChild() { return this->child; }

void Directory::add(Component *c) {
  c->setParent(this);
  this->child = c;
}
