#ifndef SHAPE_H_
#define SHAPE_H_

#include "Vector2D.h"

class Shape {
private:
	const Vector2D center;
protected:
	double area = 0.0;
public:
	Shape() : center(Vector2D(0,0)) {}

	Shape(const Vector2D& center) : center(center) {}

	virtual ~Shape() = default;

	virtual std::string getCenter() const {
	    return this->center;
    }

	double getArea() const {
		return area;
	}
};



#endif /* SHAPE_H_ */
