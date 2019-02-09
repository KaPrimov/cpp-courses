#include <iostream>
#include <vector>
#include <string>

int main() {

	class Car {
		private:
			std::string make;
			int year;
			double price;

			void setMake(std::string make) {
				this->make = make;
			}

			void setYear(int year) {
				if (year < 1950 || year > 2019) {
					year = 2000;
				}
				this->year = year;
			}

			void setPrice(double price) {
				if (price <= 0) {
					price = 1000;
				}
				this->price = price;
			}
		public:
			Car(std::string make, int year, double price) {
				this->setMake(make);
				this->setYear(year);
				this->setPrice(price);
			}
			void printInfo() {
				std::cout << "Make : " << this->make << std::endl
				<< "Year : " << this->year << std::endl 
				<< "Price : " << this->price << std::endl;
			}

			double getPrice() {
				return this->price;
			}
	};

	class AutoHouse {
		private:
			double capital;
			double overcharge;
			std::vector<Car> cars;
			
			void setCapital(double capital) {
				if (capital <= 0) {
					capital = 10000;
				}
				this->capital = capital;
			}
			void setOvercharge(double overcharge) {
				if (overcharge <= 0) {
					overcharge = 500;
				}
				this->overcharge = overcharge;
			}

		public:
			AutoHouse(double capital, double overcharge) {
				this->setCapital(capital);
				this->setOvercharge(overcharge);
			}

			double getOvercharge() {
				return this->overcharge;
			}

			void showAllCars() {
				for (int i = 0; i < this->cars.size(); ++i) {
					cars.at(i).printInfo();
				}
			}

			void buyCar(Car car) {
				if (this->capital >= car.getPrice()) {
					cars.push_back(car);
					capital -= car.getPrice();
				}
			}

			void sellAllCars() {
				std::cout << "Capital before sell : " << this->capital << std::endl;
				for (size_t i = 0; i < cars.size(); i++) {
					this->capital += (cars.at(i).getPrice() + this->overcharge);
				}
				std::cout << "Capital after sell : " << this->capital << std::endl;
				this->cars.clear();
			}
	};
	

	double initiialCapital, overcharge;
	std::cin >> initiialCapital >> overcharge;
	std::vector<int> commands;
	int currentCommand = -1;
	bool shouldBePrinted = false;
	while(currentCommand != 0) {
		std::cin >> currentCommand;
		commands.push_back(currentCommand);
		if (currentCommand == 1) {
			shouldBePrinted = true;
		}
	}
	AutoHouse autoHouse(initiialCapital, overcharge);
	std::string carName = "";
	int year;
	double price;
	for (int i = 0; i < commands.size(); ++i) {
		const int currentCommand = commands.at(i);
		switch (currentCommand) {
			case 1:
				autoHouse.showAllCars();
				break;
			case 2:
				autoHouse.sellAllCars();
				break;
			case 3:
				std::cin >> carName >> year >> price;
				Car car(carName, year, price);
				autoHouse.buyCar(car);
				break;
		}
	}
	if (shouldBePrinted) {
		autoHouse.showAllCars();
	}
	return 0;
}
