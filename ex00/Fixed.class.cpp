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
    std::cout << "constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    return this->_fixed_coma_int;    
}

void Fixed::setRawBits(int const raw) {
    this->_fixed_coma_int = raw;
}