#pragma once
#include <SFML/Graphics.hpp>
#include <map>

class TexturesManager
{
public:
	TexturesManager();

	~TexturesManager();

	void CreateNewTexture(std::string _textureName, std::string _texturePath);

	sf::Texture* GetTexture(std::string _textureName);

private:
	std::map<std::string, sf::Texture*>* textures;
};