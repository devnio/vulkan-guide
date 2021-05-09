﻿#pragma once

#include <vk_types.h>

class VulkanEngine {
public:

	bool _isInitialized{ false };
	int _frameNumber {0};

	VkExtent2D _windowExtent{ 1280 , 720 };

	struct SDL_Window* _window{ nullptr };

	void init();
	void cleanup();
	void draw();
	void run();
};
