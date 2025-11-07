#pragma once
#include "VisualObject.h"

class Window
{
public:
	Window(sf::VideoMode _videoMode, std::string _windowName);

	~Window();

	void ExecuteWindow();

	sf::RenderWindow* GetWindow();

private:
	sf::RenderWindow* window;

	std::vector<VisualObject> visualObjects;
};