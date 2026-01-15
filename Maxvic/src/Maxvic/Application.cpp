#include "mvpch.h"
#include "Application.h"
#include "Maxvic/Events/ApplicationEvent.h"
#include "Maxvic/Logger.h"


//temp
#include <GLFW/glfw3.h>

namespace Maxvic
{
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		while (m_Running)
		{
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

}
