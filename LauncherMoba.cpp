#include <SFML/Audio.hpp>
#include "Window.h"

int main()
{
    Window* mainWindow = new Window(sf::VideoMode({ 800, 600 }), "MOBA Launcher");

    mainWindow->ExecuteWindow();

    delete mainWindow;

    return 0;
}
