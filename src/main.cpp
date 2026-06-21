// TETRIS CODE
#include <SFML2/Graphics.hpp>
#include <optional>
#include <time.h>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(320, 480), "MyOwnTetris");

    Texture t;
    t.loadFromFile("assets/images/tiles.png");

    Sprite s(t);

    while (window.isOpen())
    {
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
            {
                window.close();
            }
        }

        window.clear(Color::White);
        window.draw(s);
        window.display();
    }

    return 0;
}