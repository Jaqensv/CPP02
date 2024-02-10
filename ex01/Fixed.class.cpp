

#include "Fixed.class.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() {
    this->_fixed_coma_int = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {


}

Fixed::Fixed(const float f) {


}

Fixed::Fixed(Fixed const &src) {
    this->_fixed_coma_int = src.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member fonction called" << std::endl;
    return this->_fixed_coma_int;    
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member fonction called" << std::endl;
    this->_fixed_coma_int = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assigment operator called" << std::endl;
    this->_fixed_coma_int = rhs.getRawBits();
    return (*this);
}

float Fixed::toFloat() const {

}

int Fixed::toInt() const {

}

std::ostream &operator<<(std::ostream & o, Fixed const & rhs) {
    return (o << rhs.getRawBits());
}