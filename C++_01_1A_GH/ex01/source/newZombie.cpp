/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:02:24 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 13:33:48 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/main.h"

Zombie *Zombie::newZombie( std::string name )
{
	return new Zombie( name );
}
