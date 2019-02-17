#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
	private:
		const std::string brand;
		const std::string model;
		const int year;
	public:
		Car(std::string brand, std::string model, int year) : brand(brand), model(model), year(year) {}
		std::string GetBrand() const {
			return this->brand;
		}

		std::string GetModel() const {
			return this->model;
		}

		int GetYear() const {
			return this->year;
		}
};
#endif // !CAR_H
