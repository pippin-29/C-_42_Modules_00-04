/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:16:14 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/02 11:16:18 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype> // Contains toupper

std::string capitaliser(const std::string& s)
{
	std::string out = std::move(s);
	int	i;

	i = 0;
	while (s[i])
	{
		if (std::islower(s[i]))
			out[i] = std::toupper(s[i]);
		i++;
	}
	return (out);
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
	else
	{
		while (argv[i])
		{
			std::cout << capitaliser(argv[i]) << " ";
			i++;
		}
	}
	return (0);
}