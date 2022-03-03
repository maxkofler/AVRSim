#include "log.h"

Log::Log* hlog;

#include "cpu.h"
#include "cpu_archs/neumann.h"
#include "cpu_archs/harvard.h"

#include "cpus/avr/avre+.h"

#include "memory/linearmemory.h"

int main(){
	hlog = new Log::Log(Log::D);

	{
		FUN();

		LOGU("Welcome to USim");

		USim::CPU* cpu = new USim::CPUS::AVREplus();

		LOGI("CPU core name: " + cpu->getArchName());
		LOGI("CPU core width: " + std::to_string(cpu->getArchWidth()) + " bits");
	}

	return 0;
}
