#include "Logger.h"

namespace Maxvic
{

	std::shared_ptr<spdlog::logger> Logger::s_ClientLogger;
	std::shared_ptr<spdlog::logger> Logger::s_CoreLogger;

	void Logger::Init()
	{
		auto console = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
		console->set_pattern("[%T] [%^%l%$] %v");

		//CORE
		s_CoreLogger = std::make_shared<spdlog::logger>("MAXVIC_CORE", spdlog::sinks_init_list{ console });
		s_CoreLogger->set_level(spdlog::level::trace); //Set level to trace (everything is printed)
		s_CoreLogger->flush_on(spdlog::level::trace); //Send every message


		//CLIENT
		s_ClientLogger = std::make_shared<spdlog::logger>("APP", spdlog::sinks_init_list{ console });
		s_ClientLogger->set_level(spdlog::level::trace);
		s_ClientLogger->flush_on(spdlog::level::trace);

		MV_CORE_INFO("Maxvic Logger Initalized!");
	}

}