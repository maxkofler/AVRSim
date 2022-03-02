#ifndef __CPU_ARCH_HARVARD__
#define __CPU_ARCH_HARVARD__

#include "cpu.h"

namespace USim{

	class CPU_Harvard : public CPU{

	public:

		CPU_ARCH				getArch(){return CPU_ARCH_HARVARD;}

	};

}

#endif