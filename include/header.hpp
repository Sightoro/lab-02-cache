// Copyright 2021 Lonskiy Yuriy yuralon.skiy@mail.ru

#include <vector>
#include <ctime>
#include <random>
#include <algorithm>
#include <iostream>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#define Circles 1000
#define Step 16

class L_Cache {
 public:
  explicit L_Cache(unsigned length);
  ~L_Cache();
  void warm_up() const;
  double straight();
  double back();
  double random();

  typedef double (L_Cache::*run_func)();

 private:
  void init();
  std::size_t size;
  unsigned int* arr{};
};

#endif // INCLUDE_HEADER_HPP_
