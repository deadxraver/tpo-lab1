#pragma once

#include "abstracts.hpp"

#include <string>

class Whale : public Entity {
public:
  void fall(Land&) const;
};

class Person : public Entity {
private:
  std::string name_;
  int cleanup_abilities_;
  bool has_light_;
public:
  const std::string& name() const;
  int cleanup_abilities() const;
  bool has_light() const;
  Person(std::string, int);
  Person(std::string, int, bool);
};
