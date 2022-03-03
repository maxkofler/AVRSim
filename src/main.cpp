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

		USim::CPU* cpus[4];

		cpus[0] = new USim::CPU_Harvard();
		cpus[1] = new USim::CPU_Neumann();
		cpus[2] = new USim::CPUS::AVREplus();

		for (int i = 0; i < 3; i++){
			LOGI("CPU " + std::to_string(i) + ": " + cpus[i]->getArchName());
		}

	}

	return 0;
}
