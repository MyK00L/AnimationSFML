# AnimationSFML
simple animation class for SFML
## Usage:
All the frames for the animation after the first must be in order to the right of the first with no spacing between them.
update() should be called one time before the draws (it updates the sprite to the current frame)
restartClock() does what it says
### constructor arguments:
 * texture is the texture (duh)
 * rectangle is the position of the first frame of the animation
 * millis is the amount of milliseconds the whole animation should last
 * ntiles is the amount of frames the animation is composed of
for the rest you can use it as a normal SFML sprite except you cannot change anything about the texture
