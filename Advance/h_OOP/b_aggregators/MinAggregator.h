#ifndef MINAGGREGATOR_H
#define MINAGGREGATOR_H

#include "Aggregator.h"
#include <limits>

class MinAggregator : public StreamAggregator {
public:
	MinAggregator(std::istream& stream) : StreamAggregator(stream) {
		this->aggregationResult = std::numeric_limits<int>::max();
	}
protected:
	virtual void aggregate(int next) override {
		if(next < this->aggregationResult) {
			this->aggregationResult = next;
		}
	}
};

#endif /* MINAGGREGATOR_H */
