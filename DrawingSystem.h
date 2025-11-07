#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

class Window;
class VisualObject;

class DrawingSystem
{
public:
	void DrawObjects(sf::RenderWindow* _window, std::vector<VisualObject*>* _objectsToDraw);

private:
	void DrawObject(sf::RenderWindow* _window, VisualObject* _objectToDraw);
};