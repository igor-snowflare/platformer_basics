# Platformer Basics

A playground for attempting to recreate various platformer/2D physics functions.

## Raycasting

First order of business is Raycasting for which we need to create a number of other common objects with very limitted functionalities so that we can test the full system around it:

- `Vector2` — For now limited to a simple struct that contains `x` and `y` values. Mimics the basic behaviour of Unity's Vector2.
- `GameObject` — The main movable object in a hypotethical game engine. For now works as a position and collider holder
- `Collider` — The core object that defines the bounding box which should detect collisions

### Raycast function

For now the raycasting function is limited to just the calculation of the ray origin points using `void Collider::raycastX(int direction, float distance, Vector2 position)`.

What happens here is that we used a fixed `raysPerBlock` value from the `configs/collision_configs.hpp` file to determine, based on Collider's height, how many rays we need to cast. Then we use this information to calculate the spacing between rays.

Based on whether we're checking for horizontal collisions to the left or to the right, we will set the initial ray origin point to be in the top right or top left corner of the collider and then proceed to increment its Y position the required number of times.

The end result is that we will raycast from both the corners on appropriate side and on regular intervals between them while `raysPerBlock` will ensure no gaps larger that `blockSize/raysPerBlock`.