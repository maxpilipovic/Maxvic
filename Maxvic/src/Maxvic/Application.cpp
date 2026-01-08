#include "mvpch.h"
#include "Application.h"
#include "Maxvic/Events/ApplicationEvent.h"
#include "Maxvic/Logger.h"

namespace Maxvic
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			MV_CORE_TRACE("Event: {}", e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			MV_CORE_TRACE("Event: {}", e.ToString());
		}
		while (m_Running)
		{

		}
	}

}
