#pragma once
#include "TexturesManager.h"

class VisualObject
{
public:
	VisualObject(sf::Texture* _texture);
	VisualObject(sf::Texture* _texture, sf::Vector2i _position);
	VisualObject(sf::Texture* _texture, int _posX, int _posY);

	const sf::Sprite* GetSprite() const;
	const sf::Vector2i* GetPosition() const;

	void SetPosition(int _newPosX, int _newPosY);
	void SetPosition(sf::Vector2i _newPos);

	void SetTexture(sf::Texture* _texture);

private:
	sf::Sprite* sprite;
	sf::Vector2i* position;
};