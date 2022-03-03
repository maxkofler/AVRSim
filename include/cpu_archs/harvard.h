#ifndef __CPU_ARCH_HARVARD__
#define __CPU_ARCH_HARVARD__

#include "cpu.h"

namespace USim{

	 class CPU_Harvard : public CPU{

	public:

		CPU_ARCH						getArch() {return CPU_ARCH_HARVARD;}
		virtual std::string				getArchName() = 0;
		virtual uint8_t					getArchWidth() = 0;

	};

}

#endif