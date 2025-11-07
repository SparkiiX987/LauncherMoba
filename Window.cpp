#include "Window.h"
#include "DrawingSystem.h"

Window::Window(sf::VideoMode _videoMode, std::string _windowName) : window(new sf::RenderWindow(_videoMode, _windowName))
{
}

Window::~Window()
{
	delete window;
}

void Window::ExecuteWindow()
{
    TexturesManager textureManager;
    textureManager.CreateNewTexture("testTexture", "Textures\\TestTexture.png");
    DrawingSystem drawingSystem;
    VisualObject testObject(textureManager.GetTexture("testTexture"));

    std::vector<VisualObject*> visualObjects;
    visualObjects.push_back(&testObject);

    while (window->isOpen())
    {
        while (const std::optional event = window->pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window->close();
        }

        window->clear();
        drawingSystem.DrawObjects(window, &visualObjects);
        window->display();
    }
}

sf::RenderWindow* Window::GetWindow()
{
	return window;
}
