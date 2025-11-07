#pragma once
#include "TexturesManager.h"

class VisualObject
{
public:
	VisualObject(sf::Texture* _texture);
	VisualObject(sf::Texture* _texture, sf::Vector2f _position);
	VisualObject(sf::Texture* _texture, float _posX, float _posY);

	const sf::Sprite* GetSprite() const;
	const sf::Vector2f* GetPosition() const;

	void SetPosition(float _newPosX, float _newPosY);
	void SetPosition(sf::Vector2f _newPos);

	void SetTexture(sf::Texture* _texture);

private:
	sf::Sprite* sprite;
	sf::Vector2f* position;
};