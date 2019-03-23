#ifndef FILE_H_
#define FILE_H_

#include "FileSystemObject.h"
#include "ByteContainer.h"

class File : public FileSystemObject,  public ByteContainer {
public:
	File(std::string fileName, std::string bytes) : FileSystemObject(fileName), ByteContainer(bytes) {}

	size_t getSize() const {
		return ByteContainer::getSize();
	}
};



#endif /* FILE_H_ */
