#ifndef SUMAGGREGATOR_H_
#define SUMAGGREGATOR_H_

#include "Aggregator.h"

class SumAggregator : public StreamAggregator {
public:
	SumAggregator(std::istream& stream) : StreamAggregator(stream) {
		this->aggregationResult = 0;
	}
protected:
	virtual void aggregate(int next) override {
		aggregationResult += next;
	}
};



#endif /* SUMAGGREGATOR_H_ */
