#include "TexturesManager.h"
#include <iostream>

TexturesManager::TexturesManager() : textures(new std::map<std::string, sf::Texture*>)
{
}

TexturesManager::~TexturesManager()
{
	for (auto& pair : *textures) 
	{
		delete pair.second;
	}
	textures->clear();
}

void TexturesManager::CreateNewTexture(std::string _textureName, std::string _texturePath)
{
	if (textures->find(_textureName) != textures->end())
	{
		std::cout << "A texture with the name " << _textureName << " already existe !" << std::endl;
		return;
	}

	sf::Texture* newTexture = new sf::Texture();
	if (!newTexture->loadFromFile(_texturePath, false))
	{
		std::cout << "Error while getting the texture " << _textureName << " in the path " << _texturePath << std::endl << std::endl;
		return;
	}
	textures->insert({ _textureName, newTexture });
}

sf::Texture* TexturesManager::GetTexture(std::string _textureName)
{
	return (*textures)[_textureName];
}
