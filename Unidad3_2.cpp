#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "2");

    sf::Texture blackTexture;
    blackTexture.loadFromFile("chessb.png");
    sf::Sprite cuadradoNegro(blackTexture);

    sf::Texture whiteTexture;
    whiteTexture.loadFromFile("chessw.png");
    sf::Sprite cuadradoBlanco(whiteTexture);

    sf::Vector2f topLeft(100, 100);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        for (int x = 0; x < 700; x += 200)
        {
            cuadradoBlanco.setPosition(x, 0);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x, 100);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x, 200);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x, 300);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x, 400);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x, 500);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x, 600);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x, 700);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);

            cuadradoNegro.setPosition(x + 100, 0);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x+100, 100);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x + 100, 200);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x + 100, 300);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x + 100, 400);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x + 100, 500);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
            cuadradoNegro.setPosition(x + 100, 600);
            cuadradoNegro.setScale(0.78, 0.78);
            window.draw(cuadradoNegro);
            cuadradoBlanco.setPosition(x + 100, 700);
            cuadradoBlanco.setScale(0.78, 0.78);
            window.draw(cuadradoBlanco);
        }

        window.display();
    }
}