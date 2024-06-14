#include "../headers/component.h"
#include <string>

using namespace sysfile;

File::File() {
  this->size = 0;
  this->content = "Hola mundo";
}

Component::~Component() {}

File::~File() {}

int File::getSize() { return this->size; }

std::string File::displayContent() { return this->content; }

Directory::Directory() {
  this->size = 0;
  this->content = "";
}
std::string Directory::displayContent() { return this->content; };

Component *Directory::getParent() { return this->parent; }

Component *Directory::getChild() { return this->child; }

void Directory::setParent(Component *c) { this->parent = c; }

int Directory::getSize() { return this->size; }

void Directory::remove(Component *d) { this->child = nullptr; }

Directory::~Directory() {}

void Directory::add(File *f) { this->content = f->displayContent(); }
