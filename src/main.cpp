#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

    sf::RenderWindow mainWindow(sf::VideoMode({800, 600}), "Example 1");
    sf::Texture imagem;

    //! verificando se a imagem carregou
    if (!imagem.loadFromFile("assets/fundo.jpg"))
    {
        std::cerr << "Erro ao carregar imagem\n";
        return 0;
    }

    sf::Sprite fundo(imagem);
    fundo.setPosition(sf::Vector2f(0, 0));
    fundo.setScale(sf::Vector2f(0.3,0.3));

    while(mainWindow.isOpen()) {

        //! funcao que escuta os evento
        while(const std::optional event = mainWindow.pollEvent()){

            // função que escuta quando clica "X"
            if(event->is<sf::Event::Closed>()) {
                mainWindow.close();
            }
        }
        
        mainWindow.clear(sf::Color::Black);
        mainWindow.draw(fundo);
        mainWindow.display();

    }

    return 0;
}
