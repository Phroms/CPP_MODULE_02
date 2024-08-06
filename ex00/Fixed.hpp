/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:07:20 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/31 17:20:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
    private:
        int _num;
        static int _alm;
    public:
        Fixed();
        Fixed(int data);
        Fixed(const Fixed &);
        Fixed &operator=(const Fixed &);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

int     main();

#endif
