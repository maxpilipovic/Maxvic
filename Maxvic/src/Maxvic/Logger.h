#pragma once

#include "Core.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"
#include <memory>

//MACROS FOR LOGGER
#define MV_CORE_TRACE(...) ::Maxvic::Logger::getCoreLogger()->trace(__VA_ARGS__)
#define MV_CORE_INFO(...) ::Maxvic::Logger::getCoreLogger()->info(__VA_ARGS__)
#define MV_CORE_WARN(...) ::Maxvic::Logger::getCoreLogger()->warn(__VA_ARGS__)
#define MV_CORE_ERROR(...) ::Maxvic::Logger::getCoreLogger()->error(__VA_ARGS__)
#define MV_CORE_CRITICAL(...) ::Maxvic::Logger::getCoreLogger()->critical(__VA_ARGS__)

#define MV_CLIENT_TRACE(...) ::Maxvic::Logger::getClientLogger()->trace(__VA_ARGS__)
#define MV_CLIENT_INFO(...) ::Maxvic::Logger::getClientLogger()->info(__VA_ARGS__)
#define MV_CLIENT_WARN(...) ::Maxvic::Logger::getClientLogger()->warn(__VA_ARGS__)
#define MV_CLIENT_ERROR(...) ::Maxvic::Logger::getClientLogger()->error(__VA_ARGS__)
#define MV_CLIENT_CRITICAL(...) ::Maxvic::Logger::getClientLogger()->critical(__VA_ARGS__)

namespace Maxvic 
{
	class MAXVIC_API Logger
	{
	public:

		static void Init();

		static std::shared_ptr<spdlog::logger> getCoreLogger() { return s_CoreLogger; }
		static std::shared_ptr<spdlog::logger> getClientLogger() { return s_ClientLogger; }
	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}
