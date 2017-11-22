#include <SFML\Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(640, 480), "SFML App");
	CircleShape circle;
	circle.setRadius(40.f);
	circle.setPosition(100.f,100.f);
	circle.setFillColor(Color::Cyan);
	
	while (window.isOpen()){
		Event event;
		
		while (window.pollEvent(event)){
			if (event.type == Event::Closed)
				window.close();
		}
		
		window.clear();
		window.draw(circle);
		window.display();
	}

}
	