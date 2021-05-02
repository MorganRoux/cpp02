/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:53:39 by mroux             #+#    #+#             */
/*   Updated: 2021/05/02 18:12:15 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	public:
		Fixed(int value = 0);
		Fixed(Fixed const& fixed);
		Fixed&				operator=(Fixed const& fixed);
		~Fixed();
		int					getRawBits();
		void				setRawBits(int const raw) {_value = raw;};

	private:
		int					_value;
		static int const	_n = 8;
};

#endif
