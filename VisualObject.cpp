#include "VisualObject.h"

VisualObject::VisualObject(sf::Texture* _texture) : VisualObject(_texture, 0, 0)
{
}

VisualObject::VisualObject(sf::Texture* _texture, sf::Vector2i _position) : VisualObject(_texture, _position.x, _position.y)
{
}

VisualObject::VisualObject(sf::Texture* _texture, int _posX, int _posY) :  sprite(new sf::Sprite(*_texture)), position(new sf::Vector2i(_posX, _posY))
{
}


const sf::Sprite* VisualObject::GetSprite() const
{
	return sprite;
}

const sf::Vector2i* VisualObject::GetPosition() const
{
	return position;
}

void VisualObject::SetPosition(int _newPosX, int _newPosY)
{
	position->x = _newPosX;
	position->y = _newPosY;
}

void VisualObject::SetPosition(sf::Vector2i _newPos)
{
	SetPosition(_newPos.x, _newPos.y);
}

void VisualObject::SetTexture(sf::Texture* _texture)
{

}
