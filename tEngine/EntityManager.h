#pragma once
#include <map>
#include <vector>
#include <string>
#include "Entity.hpp"

typedef std::vector<std::shared_ptr<Entity>> EntityVector;
typedef std::map<std::string, EntityVector> EntityMap;

