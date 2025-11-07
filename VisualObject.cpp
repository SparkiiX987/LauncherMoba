#include "VisualObject.h"

VisualObject::VisualObject(sf::Texture* _texture) : VisualObject(_texture, 0, 0)
{
}

VisualObject::VisualObject(sf::Texture* _texture, sf::Vector2f _position) : VisualObject(_texture, _position.x, _position.y)
{
}

VisualObject::VisualObject(sf::Texture* _texture, float _posX, float _posY) :  sprite(new sf::Sprite(*_texture)), position(new sf::Vector2f(_posX, _posY))
{
}


const sf::Sprite* VisualObject::GetSprite() const
{
	return sprite;
}

const sf::Vector2f* VisualObject::GetPosition() const
{
	return position;
}

void VisualObject::SetPosition(float _newPosX, float _newPosY)
{
	position->x = _newPosX;
	position->y = _newPosY;

	sprite->setPosition(*position);
}

void VisualObject::SetPosition(sf::Vector2f _newPos)
{
	SetPosition(_newPos.x, _newPos.y);
}

void VisualObject::SetTexture(sf::Texture* _texture)
{

}
