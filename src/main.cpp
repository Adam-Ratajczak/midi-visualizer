#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>
#include "MIDI.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "MIDI Visualizer", sf::Style::Default, sf::ContextSettings(0, 0, 2));

    MIDI midi("sample.mid");

    window.setFramerateLimit(60);

    while(window.isOpen()) {
        sf::Event event;
        while (!window.pollEvent(event)) {
            if(event.type == sf::Event::Closed){
                window.close();
                return 0;
            }
        }
        window.clear();

        window.display();
    }

    return EXIT_SUCCESS;
}
