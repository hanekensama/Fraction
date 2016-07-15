#include "fraction.hpp"

template <typename T>
Fraction::Fraction(T n = 0, T d = 1) :numer(n), denom(d) {
  
}

template class Fraction<short>;
template class Fraction<int>;
template class Fraction<long>;
template class Fraction<long long>;
