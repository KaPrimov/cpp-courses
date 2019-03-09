#include <sstream>
#include "List.h"

List::Node::Node(int value, Node * prev, Node * next) : value(value), prev(prev), next(next) {}

int List::Node::getValue() const {
	return this->value;
}
void List::Node::setValue(int value) {
	this->value = value;
}

List::Node * List::Node::getNext() const {
	return this->next;
}
void List::Node::setNext(List::Node * next) {
	this->next = next;
}

List::Node * List::Node::getPrev() const {
	return this->prev;
}
void List::Node::setPrev(List::Node * prev) {
	this->prev = prev;
}

List::List() : tail(nullptr), head(nullptr), size(0) {}
List::List(const List& other) : List() {
	this->addAll(other);
}

int List::first() const {
	return this->head->getValue();
}

void List::add(int value) {
	Node * node = new Node(value, this->tail, nullptr);
	if (this->head == nullptr) {
		this->head = node;
	} else {
		this->tail->setNext(node);
	}
	this->tail = node;
	++this->size;
}
void List::addAll(const List& other) {
	Node * currentNode = other.head;
	while (currentNode != nullptr) {
		this->add(currentNode->getValue());
		currentNode = currentNode->getNext();
	}
}
void List::removeFirst() {
	if (this->head != nullptr) {
	    Node* node = this->head;
	    if (node->getNext() != nullptr) {
	      node->getNext()->setPrev(nullptr);
	      this->head = node->getNext();
	    } else {
	      this->head = nullptr;
	      this->tail = nullptr;
	    }
	    delete node;
	    --this->size;
	  }
}

void List::removeAll() {
  Node* node = this->head;
  while (node != nullptr) {
    Node* toDelete = node;
    node = node->getNext();
    delete toDelete;
  }
  this->head = nullptr;
  this->tail = nullptr;
  this->size = 0;
}

size_t List::getSize() const {
  return this->size;
}

bool List::isEmpty() const {
  return this->size == 0;
}


List List::getReversed(List l) {
	List reversedList;
	Node * currentNode = l.tail;
	while (currentNode != nullptr) {
		reversedList.add(currentNode->getValue());
		currentNode = currentNode->getPrev();
	}

	return reversedList;
}
std::string List::toString() const {
	std::ostringstream oss;
	Node * node = this->head;

	while (node != nullptr) {
		oss << node->getValue();
		if (node != this->tail) {
			oss << " ";
		}
		node = node->getNext();
	}
	return oss.str();
}

List& List::operator<<(const int& value) {
	this->add(value);
	return *this;
}
List& List::operator<<(const List& other) {
	this->addAll(other);
	return *this;
}

List& List::operator=(const List& other) {
	if (this != &other) {
		this->removeAll();
		this->addAll(other);
	}
	return *this;
}

List::~List() {
	this->removeAll();
}

