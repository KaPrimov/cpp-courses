#ifndef SOLFEGENOTENAMING_H_
#define SOLFEGENOTENAMING_H_

#include <string>
#include "NoteName.h"

struct SolfegeNoteNaming {
	NoteName operator()(const std::string& note) const {
		if (note == "Do") {
			return {'C'};
		} else if (note == "Re") {
			return {'D'};
		} else if (note == "Mi") {
			return {'E'};
		} else if (note == "Fa") {
			return {'F'};
		} else if (note == "Sol") {
			return {'G'};
		} else if (note == "La") {
			return {'A'};
		} else if (note == "Si") {
			return {'B'};
		}
		return {'?'};
	}

};

#endif /* SOLFEGENOTENAMING_H_ */
