

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(Fixed const &src);
    ~Fixed(); //virtual ??
    int getRawBits() const;
    void setRawBits(int const raw);
    Fixed &operator=(Fixed const &rhs);
    float toFloat() const;
    int toInt() const;

private:
    int _fixed_coma_int;
    static const int _bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif