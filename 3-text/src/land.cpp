#include "land.hpp"

int Underground::visibility() const {
  if (!this->is_open_)
    return 0;
  int ret = 25;
  if (!is_dark_)
    ret += 20;
  if (!is_dusty_)
    ret += 55;
  return ret;
}

bool Underground::is_dusty() const {
  return this->is_dusty_;
}

bool Underground::is_dark() const {
  return this->is_dark_;
}

void Underground::clean_up(const Person& p) {
  if (p.cleanup_abilities() < 50)
    throw std::string("too slow...");
  this->is_open_ = true;
}

void Underground::light_up(const Person& p) {
  if (!p.has_light())
    throw p.name() + " has no light";
  this->is_dark_ = false;
}

Underground::Underground() : is_dusty_(true), is_dark_(true) {}

Underground& Earth::underground() {
  if (!this->is_open())
    throw std::string("not open");
  return this->underground_;
}
