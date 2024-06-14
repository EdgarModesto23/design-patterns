#ifndef component
#define component

#include <iostream>

namespace sysfile {

class File {
private:
  std::string content;
  int size;

public:
  File();
  ~File();
  std::string displayContent();
  int getSize();
};

class Component {

public:
  Component *child;
  Component *parent;
  std::string content;
  int size;
  virtual ~Component() = 0;
  virtual std::string displayContent() = 0;
  virtual void add(File *f) = 0;
  virtual void remove(Component *d) = 0;
  virtual int getSize() = 0;
  virtual Component *getParent() = 0;
  virtual Component *getChild() = 0;
  virtual void setParent(Component *c) = 0;
};

class Directory : public Component {
public:
  Directory();
  ~Directory() override;
  std::string displayContent() override;
  void add(File *f) override;
  void remove(Component *d) override;
  int getSize() override;
  Component *getParent() override;
  Component *getChild() override;
  void setParent(Component *c) override;
};

} // namespace sysfile

#endif // !component
