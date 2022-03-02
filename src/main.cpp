#include "log.h"

Log::Log* hlog;

#include "cpu.h"
#include "cpu_archs/neumann.h"
#include "cpu_archs/harvard.h"

int main(){
	hlog = new Log::Log(Log::D);

	{
		FUN();

		LOGU("Welcome to USim");

		USim::CPU* cpu = new USim::CPU_Neumann();

		USim::CPU* cpu2 = new USim::CPU_Harvard();

	}

	return 0;
}
