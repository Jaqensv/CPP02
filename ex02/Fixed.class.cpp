/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:55:52 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/22 16:37:52 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() {
    this->_fixed_coma_int = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
    this->_fixed_coma_int = i * static_cast<int>(pow(2, this->_bits));
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
    this->_fixed_coma_int = roundf(f * pow(2, this->_bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    return this->_fixed_coma_int;    
}

void Fixed::setRawBits(int const raw) {
    this->_fixed_coma_int = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assigment operator called" << std::endl;
    this->_fixed_coma_int = rhs.getRawBits();
    return (*this);
}

float Fixed::toFloat() const {
    return (this->_fixed_coma_int / pow(2, this->_bits));
}

int Fixed::toInt() const {
    return (this->_fixed_coma_int / static_cast<int>(pow(2, this->_bits)));
}

std::ostream &operator<<(std::ostream & o, Fixed const & rhs) {
    return (o << rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs) {
    return this->_fixed_coma_int > rhs._fixed_coma_int;
}

bool Fixed::operator<(Fixed const & rhs) {
    return this->_fixed_coma_int < rhs._fixed_coma_int;
}

bool Fixed::operator>=(Fixed const & rhs) {
    return this->_fixed_coma_int >= rhs._fixed_coma_int;
}

bool Fixed::operator<=(Fixed const & rhs) {
    return this->_fixed_coma_int <= rhs._fixed_coma_int;
}

bool Fixed::operator==(Fixed const & rhs) {
    return this->_fixed_coma_int == rhs._fixed_coma_int;
}

bool Fixed::operator!=(Fixed const & rhs) {
    return this->_fixed_coma_int != rhs._fixed_coma_int;
}

Fixed Fixed::operator+(Fixed const & rhs) {
    Fixed a;
    a._fixed_coma_int = this->_fixed_coma_int + a._fixed_coma_int;
    return a;
}

Fixed Fixed::operator-(Fixed const & rhs) {
    Fixed a;
    a._fixed_coma_int = this->_fixed_coma_int - a._fixed_coma_int;
    return a;
}

Fixed Fixed::operator*(Fixed const & rhs) {
    Fixed a;
    a._fixed_coma_int = (this->_fixed_coma_int * rhs._fixed_coma_int) / (pow(2, this->_bits));
    return a;
}

Fixed Fixed::operator/(Fixed const & rhs) {
    Fixed a;
    a._fixed_coma_int = (this->_fixed_coma_int / rhs._fixed_coma_int) / (pow(2, this->_bits));
    return a;
}