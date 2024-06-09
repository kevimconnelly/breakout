#ifndef GAMELEVEL_H
#define GAMELEVEL_H
#include <vector>

#include <glad/glad.h>
#include <glm/glm.hpp>

#include "game_object.h"
#include "sprite_renderer.h"
#include "resource_manager.h"

class GameLevel
{
public:
	//level state
	std::vector<GameObject> Bricks;

	//cosntructor
	GameLevel() { }

	//loads level form file
	void Load(const char* file, unsigned int levelWidth, unsigned int levelHeight);

	//render level
	void Draw(SpriteRenderer &renderer);

	//check if the level is completed (all non-solids destroyed)
	bool IsCompleted();
private:
	//initialize level from tile data
	void init(std::vector<std::vector<unsigned int>> tileData, unsigned int levelWidth, unsigned int levelHeight);
};

#endif