/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:23:34 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/07 18:05:00 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() {
    this->_fixed_coma_int = 0;
    std::cout << "Default constructor called" << std::endl;
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