#ifndef HASID_H_
#define HASID_H_

class HasId {
public:
	virtual ~HasId() = default;

	virtual int getId() const = 0;
};

#endif /* HASID_H_ */
