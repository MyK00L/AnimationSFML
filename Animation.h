#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Animation : public sf::Drawable
{
public:
	Animation(const sf::Texture& texture, const sf::IntRect& rectangle, size_t millis, size_t ntiles);

	void update(); //updates sprite to current frame

	void restartClock();

	void setMillis(size_t m) { millis = m; }

	size_t getMillis() { return millis; }

	void setColor(const sf::Color& color) { sprite.setColor(color); }

	const sf::Color& getColor() const { return sprite.getColor(); }

	sf::FloatRect getLocalBounds() const { return sprite.getLocalBounds(); }

	sf::FloatRect getGlobalBounds() const { return sprite.getGlobalBounds(); }

	void setPosition(float x, float y) { sprite.setPosition(x, y); }

	void setPosition(const sf::Vector2f &position) { sprite.setPosition(position); }

	void setRotation(float angle) { sprite.setRotation(angle); }

	void setScale(float factorX, float factorY) { sprite.setScale(factorX, factorY); }

	void setScale(const sf::Vector2f &factors) { sprite.setScale(factors); }

	void setOrigin(float x, float y) { sprite.setOrigin(x, y); }

	void setOrigin(const sf::Vector2f &origin) { sprite.setOrigin(origin); }

	const sf::Vector2f & getPosition() const { return sprite.getPosition(); }

	float getRotation() const { return sprite.getRotation(); }

	const sf::Vector2f & getScale() const { return sprite.getScale(); }

	const sf::Vector2f & getOrigin() const { return sprite.getOrigin(); }

	void move(float offsetX, float offsetY) { sprite.move(offsetX, offsetY); }

	void move(const sf::Vector2f &offset) { sprite.move(offset); }

	void rotate(float angle) { sprite.rotate(angle); }

	void scale(float factorX, float factorY) { sprite.scale(factorX, factorY); }

	void scale(const sf::Vector2f &factor) { sprite.scale(factor); }

	const sf::Transform & getTransform() const { return sprite.getTransform(); }

	const sf::Transform & getInverseTransform() const { return sprite.getInverseTransform(); }

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //draws but does not update
	sf::Sprite sprite;
	size_t millis; //milliseconds for the complete animation
	size_t mpt; //milliseconds per frame
	sf::Clock clock;
	size_t ntiles; //number of animation frames
	size_t width; //width of the sprite
};
