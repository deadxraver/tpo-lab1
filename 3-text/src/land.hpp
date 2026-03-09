#pragma once

#include "abstracts.hpp"
#include "entity.hpp"

class Underground : public Land {
private:
  bool is_dusty_;
  bool is_dark_;
public:
  int visibility() const;
  bool is_dusty() const;
  bool is_dark() const;
  void clean_up(const Person& p);
  void light_up(const Person& p);
  Underground();
};

class Earth : public Land {
private:
  Underground underground_;
public:
  Underground& underground();
};
