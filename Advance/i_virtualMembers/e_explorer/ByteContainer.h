#ifndef BYTECONTAINER_H_
#define BYTECONTAINER_H_

#include <string>

class ByteContainer {
private:
  const std::string bytes;

protected:
  explicit ByteContainer(std::string bytes) : bytes(std::move(bytes)) { }

  size_t getSize() const {
    return this->bytes.length();
  }

public:
  virtual ~ByteContainer() = default;

  const std::string& getBytes() const {
    return this->bytes;
  }
};



#endif /* BYTECONTAINER_H_ */
