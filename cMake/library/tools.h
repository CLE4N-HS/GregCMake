#pragma once
#include <iostream>
#include <string>

#include <fstream>
#include <map>


#define EPSILON ((float)1e-6)
#define DEG2RAD ((float)0.01745329f)

//float vec2fGetMagnitude(sf::Vector2f _vec);
//void vec2fNormalize(sf::Vector2f& _vec);
//sf::Vector2f polarCoord(sf::Vector2f const& _a, float const& _r, float const& _teta);
int randomInt(int min, int max);
float randomFloat(float min, float max);

/**
* @brief Lerp between two values
* 
* @param v0 First
* @param v1 Second
* @param t Third
* 
* @warning t must be between 0 and 1
* 
*/
float lerp(float v0, float v1, float t);
