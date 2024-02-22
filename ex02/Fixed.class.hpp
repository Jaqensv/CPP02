/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:55:40 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/22 16:37:28 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    bool operator>(Fixed const & rhs);
    bool operator<(Fixed const & rhs);
    bool operator>=(Fixed const & rhs);
    bool operator<=(Fixed const & rhs);
    bool operator==(Fixed const & rhs);
    bool operator!=(Fixed const & rhs);
    Fixed operator+(Fixed const & rhs);
    Fixed operator-(Fixed const & rhs);
    Fixed operator*(Fixed const & rhs);
    Fixed operator/(Fixed const & rhs);

private:
    int _fixed_coma_int;
    static const int _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif