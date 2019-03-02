#ifndef VECTORCOMPARISONS_H_
#define VECTORCOMPARISONS_H_

#include "Vector.h"

struct VectorLengthComparer {
	const bool operator() (const Vector& a, const Vector& b) const {
		return a.getLength() < b.getLength();
	}
};

template< typename T, typename Comparator>
class ReverseComparer {
	private:
		Comparator comparator;
	public:
		bool operator() (const T& a, const T& b) const {
			return !this->comparator(a, b);
		}
};

#endif /* VECTORCOMPARISONS_H_ */
