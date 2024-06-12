#ifndef component
#define component

#include <iostream>

namespace sysfile {

class Component {
private:
  Component *child;
  Component *parent;
  std::string content;
  int size;

public:
  Component();
  virtual ~Component();
  virtual std::string displayContent() = 0;
  virtual void add(Component *c) = 0;
  virtual void remove(Component *d) = 0;
  virtual int getSize() = 0;
  virtual Component *getParent() = 0;
  virtual Component *getChild() = 0;
  virtual void setParent(Component *c) = 0;
};

class File : public Component {
private:
  std::string content;
  int size;

public:
  File();
  ~File() override;
  std::string displayContent() override;
  int getSize() override;
};

class Directory : public Component {
private:
  Component *child;
  Component *parent;
  std::string content;
  int size;

public:
  Directory();
  ~Directory() override;
  std::string displayContent() override;
  void add(Component *c) override;
  void remove(Component *d) override;
  int getSize() override;
  Component *getParent() override;
  Component *getChild() override;
  void setParent(Component *c) override;
};

} // namespace sysfile

#endif // !component
