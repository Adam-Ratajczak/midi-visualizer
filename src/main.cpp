#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "MIDI Visualizer", sf::Style::Default, sf::ContextSettings(0, 0, 2));

    window.setFramerateLimit(60);

    while(window.isOpen()) {
        sf::Event event;
        while (!window.pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();

        window.display();
    }

    return EXIT_SUCCESS;
}
