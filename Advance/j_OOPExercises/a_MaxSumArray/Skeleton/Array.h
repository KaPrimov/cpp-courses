#ifndef ARRAY_H_
#define ARRAY_H_

#include <cstdlib>

template<typename T>
class Array {
private:
	T* data;
	size_t size;
public:
	Array(size_t size) : data(new T[size]), size(size) {}

	Array(const Array& other) : data(new T[other.size]{}), size(other.size) {
		for (size_t i = 0; i < other.size; i++) {
			this->data[i] = other[i];
		}
	}

	T* begin() {
		return this->data;
	}

	T* end() {
		return this->data + this->size;
	}

	T& operator[](size_t index) const {
		return data[index];
	}

	Array& operator=(Array other) {
		if (this != &other) {
			swapPart(*this, other);
		}
		return *this;
	}

	friend void swapPart(Array& a, Array& b) {
		using std::swap;
		swap(a.data, b.data);
		swap(a.size, b.size);
	}

	virtual ~Array() {
		delete[] data;
		data = nullptr;
	}
	size_t getSize() {
		return this->size;
	}
};

#endif /* ARRAY_H_ */
