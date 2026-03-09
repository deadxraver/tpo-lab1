#include "abstracts.hpp"

void Land::open() {
  this->is_open_ = true;
}

bool Land::is_open() const {
  return this->is_open_;
}

Land::Land() : is_open_(false) {}

