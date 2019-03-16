
#ifndef AVERAGEAGGREGATOR_H_
#define AVERAGEAGGREGATOR_H_

#include "Aggregator.h"

class AverageAggregator : public StreamAggregator {
private:
	int sum;
public:
	AverageAggregator(std::istream& stream) : StreamAggregator(stream), sum(0) {
		this->aggregationResult = 0;
	}
protected:
	virtual void aggregate(int next) override {
		StreamAggregator::aggregate(next);
		this->sum += next;
		this->aggregationResult = (sum / StreamAggregator::getNumAggregated());
	}
};

#endif /* AVERAGEAGGREGATOR_H_ */
