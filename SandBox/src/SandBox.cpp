#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox() 
	{

	}
	
		
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}


//#include "spdlog/spdlog.h"
//#include "spdlog/sinks/stdout_color_sinks.h"
//namespace test {
//	static std::shared_ptr<spdlog::logger> s_ClientLogger;
//	 extern "C" void main() {
//
//		spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
//
//
//		s_ClientLogger = spdlog::stdout_color_mt("APP");
//		s_ClientLogger->set_level(spdlog::level::trace);
//
//
//		spdlog::info("hello spdlog");
//	}
//
//
//
//}