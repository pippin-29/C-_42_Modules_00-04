/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:02:19 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 14:39:04 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/main.h"

int main (void)
{
	int N = 50;
	Zombie *horde;

	horde = NULL;
	horde = Zombie::zombieHorde(N, "Horde");
	
	std::cout << "\n\n\n";

	delete[] horde;

	return (0);
}