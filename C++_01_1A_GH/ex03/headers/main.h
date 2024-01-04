/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:51:37 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/05 08:31:50 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

/// MACRO SECTION ///
# define ERROR 1
# define SUCCESS 0
/// ^MACRO SECTION^ ///

/// INCLUDE STATEMENTS ///
# include <iostream>
# include <string>
# include <random>
# include "HumanA.hpp"
# include "HumanB.hpp"
# include "Weapon.hpp"
/// ^INCLUDE STATEMENTS^ ///

/// PUBLIC FUNCTIONS ///
std::string name_maker( void );
/// ^PUBLIC FUNCTIONS^ ///

#endif