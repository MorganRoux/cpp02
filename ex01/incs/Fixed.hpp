/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:53:39 by mroux             #+#    #+#             */
/*   Updated: 2021/05/03 23:51:06 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# include <iomanip>

class Fixed {

	public:
		Fixed(int const value = 0);
		Fixed(float const value);
		Fixed(Fixed const& fixed);
		~Fixed();

		Fixed&				operator=(Fixed const& fixed);
		void				display(std::ostream& stream) const;
		int					getRawBits();
		void				setRawBits(int const raw) {_value = raw;};
		float				toFloat() const;
		int					toInt() const;

	private:
		int					_value;
		static int const	_n = 8;
};

std::ostream& operator<<(std::ostream& stream, Fixed const& fixed);

#endif
