#include "DrawingSystem.h"
#include "Window.h"

void DrawingSystem::DrawObjects(sf::RenderWindow* _window, std::vector<VisualObject*>* _objectsToDraw)
{
	for (int i = 0; i < _objectsToDraw->size(); i++)
	{
		DrawObject(_window, (*_objectsToDraw)[i]);
	}
}

void DrawingSystem::DrawObject(sf::RenderWindow* _window, VisualObject* _objectToDraw)
{
	_window->draw(*_objectToDraw->GetSprite());
}
