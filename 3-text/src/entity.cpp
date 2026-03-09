#include "entity.hpp"

void Whale::fall(Land& land) const {
  land.open();
}

const std::string& Person::name() const {
  return this->name_;
}

int Person::cleanup_abilities() const {
  return this->cleanup_abilities_;
}

bool Person::has_light() const {
  return this->has_light_;
}

Person::Person(std::string name, int cleanup_abilities, bool has_light) : name_(name), has_light_(has_light) {
  if (cleanup_abilities < 0 || cleanup_abilities > 100)
    throw std::string("cleanup_abilities should be between 0 and 100");
  this->cleanup_abilities_ = cleanup_abilities;
}

Person::Person(std::string name, int cleanup_abilities) : Person(name, cleanup_abilities, false) {}
