/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:23:32 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/07 18:25:04 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {
public:
    Fixed();
    Fixed(Fixed const & ????);
    ~Fixed(); //virtual ??
    int getRawBits() const;
    void setRawBits(int const raw);
    Fixed& operator=(Fixed const & ????);
private:
    int _fixed_coma_int;
    static const int _bits;
};

#endif