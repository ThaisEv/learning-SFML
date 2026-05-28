#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

    // Cenario 146 x 85
    // Primeiro (0,37)

    unsigned int escala = 6;
    sf::RenderWindow tela(sf::VideoMode({146*escala, 85*escala}), "");
    sf::Texture graficos;

    //! verificando se a imagem carregou
    if (!graficos.loadFromFile("assets/KC2.png"))
    {
        std::cerr << "Erro ao carregar imagem\n";
        return EXIT_FAILURE;
    }

    sf::Sprite cenario(graficos);
    cenario.setScale(sf::Vector2f(escala,escala));
    cenario.setTextureRect(sf::IntRect(sf::Vector2i(0,37), sf::Vector2i(146,85)));

    while(tela.isOpen()) {

        //! funcao que escuta os evento
        while(const std::optional event = tela.pollEvent()){

            // função que escuta quando clica "X"
            if(event->is<sf::Event::Closed>()) {
                tela.close();
            }
        }
        
        tela.clear(sf::Color::Black);
        tela.draw(cenario);
        tela.display();

    }

    return EXIT_SUCCESS;
}
