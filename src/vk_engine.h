#pragma once

#include <vk_types.h>
#include <vk_initializers.h>
#include "VkBootstrap.h"

class VulkanEngine {
public:

	VkInstance _instance; // Vulkan library handle
	VkDebugUtilsMessengerEXT _debug_messenger; // Vulkan debug output handle
	VkPhysicalDevice _chosenGPU; // GPU chosen as the default device
	VkDevice _device; // Vulkan device for commands
	VkSurfaceKHR _surface; // Vulkan window surface

	bool _isInitialized{ false };
	int _frameNumber {0};

	VkExtent2D _windowExtent{ 1280 , 720 };

	struct SDL_Window* _window{ nullptr };

	void init();
	void cleanup();
	void draw();
	void run();

private:
	void init_vulkan();
};
