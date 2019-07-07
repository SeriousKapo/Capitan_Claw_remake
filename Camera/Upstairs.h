#pragma once
#include <SFML/Graphics.hpp>
#include "Camera.h"
#include <iostream> 
#include "General_Data.h"

class Up_Stair
{
public:Up_Stair(float, float, int  ,sf::RenderTexture&, sf::Texture&, General_Data& );
	//	Up_Stair(float, float, int, sf::RenderTexture&);
	sf::RenderTexture& bg_texture;
	int height;
	sf::Vector2f pos;
	sf::Sprite map_s;
	sf::Texture& map_t;
	General_Data& general_data;


	void Draw();
};