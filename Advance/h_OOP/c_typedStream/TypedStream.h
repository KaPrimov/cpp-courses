#ifndef TYPEDSTREAM_H_
#define TYPEDSTREAM_H_

#include <vector>
#include <istream>
#include <string>

template<typename T>
class TypedStream {
	protected:
		std::istringstream stream;
	public:
		TypedStream(const std::string& input) : stream(input) {}

		virtual TypedStream<T>& operator>>(T& input) {
			return *this;
		}

		std::vector<T> readToEnd() {
			std::vector<T> elements;
			T item;
			this->operator>>(item);
			while (this->stream) {
				elements.push_back(item);
				this->operator>>(item);
			}
			return elements;
		}

		virtual ~TypedStream() = default;
};



#endif /* TYPEDSTREAM_H_ */
