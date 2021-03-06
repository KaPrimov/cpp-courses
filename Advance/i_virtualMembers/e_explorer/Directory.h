#ifndef DIRECTORY_H_
#define DIRECTORY_H_


#include <vector>

#include "FileSystemObjectsContainer.h"

using ObjectPtr = std::shared_ptr<FileSystemObject>;
using Objects = std::vector<ObjectPtr>;

class Directory : public FileSystemObject, public FileSystemObjectsContainer {
private:
  Objects items{ };

public:
  explicit Directory(std::string name) : FileSystemObject(std::move(name)) { }

  void add(const ObjectPtr& obj) override {
    this->items.push_back(obj);
  }

  Objects::const_iterator begin() const override {
    return this->items.cbegin();
  }

  Objects::const_iterator end() const override {
    return this->items.cend();
  }

  size_t getSize() const override {
    size_t totalSize = 0;
    for (const auto& file : this->items) {
      totalSize += file->getSize();
    }
    return totalSize;
  }

  void remove(ObjectPtr obj) override {
      this->items.erase(std::find(this->items.cbegin(), this->items.cend(), obj));
    }

    const ObjectPtr getItemByName(const std::string& name) {
      auto nameMatches = [&name](const ObjectPtr& obj) { return obj->getName() == name; };
      auto it = std::find_if(this->items.cbegin(), this->items.cend(), nameMatches);
      return (it != this->items.cend()) ? *it : nullptr;
    }
};

#endif /* DIRECTORY_H_ */
