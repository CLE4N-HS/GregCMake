// cMake.cpp : définit le point d'entrée de l'application.
//

#include "cMake.h"
#include "SFML/Graphics.hpp"

using namespace std;


int main()
{
	float delta = 0.0f, sPosx = 0.0f, ePosx = 10.0f;

	sf::Vector2f a(0.f, 1.f);

	cout << a.y << endl;

	cout << "Hello CMake." << endl;
	system("pause");
	return EXIT_SUCCESS;
}
