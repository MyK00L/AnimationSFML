#include "Animation.h"

Animation::Animation(const sf::Texture & texture, const sf::IntRect & rectangle, size_t millis, size_t ntiles)
	:
	sprite(texture,rectangle),
	millis(millis),
	ntiles(ntiles),
	mpt(millis/ntiles),
	clock(),
	width(rectangle.width)
{
}

void Animation::update()
{
	sprite.setTextureRect(sf::IntRect(sf::Vector2i(width*size_t((clock.getElapsedTime().asMilliseconds() % millis) / mpt),sprite.getTextureRect().top), sf::Vector2i(sprite.getTextureRect().width, sprite.getTextureRect().height)));
}

void Animation::restartClock()
{
	clock.restart();
}

void Animation::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}
