#ifndef LECTURE_H
#define LECTURE_H

#include <set>
#include <map>
#include <string>
#include <vector>

#include "Resource.h"
#include "ResourceType.h"

	namespace SoftUni {
		class Lecture {
			private:
				std::set<Resource> resources;
				std::map<ResourceType, int> numberOfResourcesByType;
			public:
				std::set<Resource>::iterator begin() {
					return resources.begin();
				}

				std::set<Resource>::iterator end() {
					return resources.end();
				}

				void addAndUpdateResources(Resource& resource) {
					if (this->resources.find(resource) != this->resources.end()) {
						this->resources.erase(resource);
						numberOfResourcesByType[resource.getType()]--;
					}

					this->resources.insert(resource);
					numberOfResourcesByType[resource.getType()]++;
				}
				
				int operator[](ResourceType type) {
					return numberOfResourcesByType[type];
				}

				friend std::vector<ResourceType>& operator<<(std::vector<ResourceType>& types,
					Lecture& lecture);
		};

		Lecture& operator<<(Lecture& lecture, Resource& resource) {
			lecture.addAndUpdateResources(resource);
			return lecture;
		}

		std::vector<ResourceType>& operator<<(std::vector<ResourceType>& types, Lecture& lecture) {
			for (std::pair<ResourceType, int> entry : lecture.numberOfResourcesByType) {
				types.push_back(entry.first);
			}
			return types;
		}
	}

#endif
