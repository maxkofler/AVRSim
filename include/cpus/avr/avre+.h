#ifndef __CPU_AVR_Eplus_H__
#define __CPU_AVR_Eplus_H__

#include "cpu_archs/harvard.h"

namespace USim{
	namespace CPUS{

		class AVREplus : public CPU_Harvard{

		public:
			USim::CPU_ARCH				getArch() {return USim::CPU_ARCH_HARVARD;}
			std::string					getArchName() {return "AVRe+";}
			uint8_t						getArchWidth() {return 8;}

		};

	}
}

#endif