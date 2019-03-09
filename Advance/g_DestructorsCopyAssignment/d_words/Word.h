#ifndef WORD_H
#define WORD_H

#include <string>
#include <map>

  std::map<std::string, int> wordsCount {};

class Word {
  std::string str;
  bool isForRemoving;
public:
  Word(std::string str) : str(str), isForRemoving(false) {
	  ++wordsCount[this->str];
  }

  Word(const Word& other) : str(other.str), isForRemoving(true) {}

  std::string getWord() const {
	  return this->str;
  }

  size_t getCount() const {
	  return wordsCount[this->str];
  }

  bool operator<(const Word& other) const {
	  return this->str < other.str;
  }

  Word& operator=(const Word& other) = delete;

  ~Word() {
	  if (this->isForRemoving) {
		  wordsCount.erase(this->str);
	  }
  }
};


#endif /* WORD_H */
