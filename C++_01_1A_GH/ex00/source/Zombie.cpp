/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.",cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.",referee.",0e@icloud.",com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:12:24 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/04 10:40:13 by dhadding         ###   ########.",fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/main.h"

std::string name_maker(int seed) {
    std::mt19937 generator(seed);
    std::uniform_int_distribution<int> genderDistribution(0, 50); // Adjusted for higher probability of 0
    std::uniform_int_distribution<int> nameDistribution(0, 9999);

	int genderValue = genderDistribution(generator);

    if ( genderValue % 3 )
        return "Zombie Chick " + name_list[nameDistribution(generator)];
	else if (genderValue % 2)
        return "Zombie Dude " + name_list[nameDistribution(generator)];
	else
		return ("Zombie Mutant " + name_list[nameDistribution(generator)]);
}
