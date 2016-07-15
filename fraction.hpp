#ifndef FRACTION_HPP
#define FRACTION_HPP

template <typename T>
class Fraction {
private:
  T numer;    // 分子
  T denom;  // 分母

public:
  Fraction(T n = 0, T d = 1);
  ~Fraction();
  Fraction(const Fraction &obj);
  Fraction &operator =(const Fraction &rhs);
  Fraction &operator +=(const Fraction &rhs);
  Fraction &operator -=(const Fraction &rhs);
  Fraction &operator *=(const Fraction &rhs);
  Fraction &operator /=(const Fraction &rhs);
};

Fraction operator +(const Fraction &lhs, const Fraction &rhs);
Fraction operator -(const Fraction &lhs, const Fraction &rhs);
Fraction operator *(const Fraction &lhs, const Fraction &rhs);
Fraction operator /(const Fraction &lhs, const Fraction &rhs);
bool operator ==(const Fraction& lhs, const Fraction &rhs);
bool operator !=(const Fraction& lhs, const Fraction &rhs);
bool operator <(const Fraction& lhs, const Fraction &rhs);
bool operator >(const Fraction& lhs, const Fraction &rhs);
bool operator <=(const Fraction& lhs, const Fraction &rhs);
bool operator >=(const Fraction& lhs, const Fraction &rhs);

typedef Fraction<short> SFrac;
typedef Fraction<int> Frac;
typedef Fraction<long> LFrac;
typedef Fraction<long long> LLFrac;

#endif
