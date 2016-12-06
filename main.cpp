#include <SFML/Graphics.hpp>
int main()
{
    // cr�ation de la fen�tre
    sf::RenderWindow window(sf::VideoMode(1900, 1000), "My window");
    window.setPosition(sf::Vector2i(0,0));

    // on fait tourner le programme tant que la fen�tre n'a pas �t� ferm�e
    while (window.isOpen())
    {
        // on traite tous les �v�nements de la fen�tre qui ont �t� g�n�r�s depuis la derni�re it�ration de la boucle
        sf::Event event;
        while (window.pollEvent(event))
        {
            // fermeture de la fen�tre lorsque l'utilisateur le souhaite
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // effacement de la fen�tre en noir
        window.clear(sf::Color::Black);

        // c'est ici qu'on dessine tout
        // window.draw(...);

        // fin de la frame courante, affichage de tout ce qu'on a dessin�
        window.display();
    }

    return 0;
}
