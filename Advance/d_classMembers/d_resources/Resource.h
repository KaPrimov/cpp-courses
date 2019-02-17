#ifndef RESOURCE_H
#define RESOURCE_H

#include "ResourceType.h"
#include <string>
#include <sstream>
#include <ostream>

namespace SoftUni {
	class Resource {
		private:
			int id;
			ResourceType type;
			std::string link;
		public:
	 		Resource() {}

			Resource(int id, ResourceType type, std::string link) 
			: id(id), type(type), link(link) {}
			
			int getId() const {
				return this->id;
			}

			ResourceType getType() const {
				return this->type;
			}

			std::string getLink() const {
				return this->link;
			}

			bool operator<(const Resource& other) const {
				return this->id < other.id;
			}
	};
		std::istream& operator>>(std::istream& is, Resource& r) {
			int id;
			std::string typeString, link;
			is >> id >> typeString >> link;
			
			ResourceType type;

			if (typeString == "Presentation") {
				type = ResourceType::PRESENTATION;
			} else if (typeString == "Demo") {
				type = ResourceType::DEMO;
			} else if (typeString == "Video") {
				type = ResourceType::VIDEO;
			}

			r = Resource(id, type, link);
			return is;
		}

		std::ostream& operator<<(std::ostream& out, const Resource& r) {
			return out << r.getId() << " " << r.getType() << " " << r.getLink();
		}
}

#endif // !RESOURCE_H 
