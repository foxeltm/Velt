#pragma once


#define GLFW_INCLUDE_VULKAN
#include <string>
#include <GLFW/glfw3.h>

namespace Lavendel
{
	namespace Renderer 
	{
	
		class Window
		{
		public:
			Window(const char* title, int width, int height);

		private:



			void initWindow(const char* title, int width, int height);
			

			const int m_Width;
			const int m_Height;
			const std::string m_Title;

			
			GLFWwindow* m_Window;
		};

	}
}


