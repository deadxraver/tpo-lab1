#pragma once

class Entity {
};

class Land {
protected:
  bool is_open_;
public:
  void open();
  bool is_open() const;
  Land();
};
