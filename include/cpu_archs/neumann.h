#ifndef __CPU_ARCH_NEUMANN__
#define __CPU_ARCH_NEUMANN__

#include "cpu.h"

namespace USim{

	class CPU_Neumann : public CPU{
		
	public:

		CPU_ARCH					getArch() {return CPU_ARCH_NEUMANN;}
		virtual std::string			getArchName();

	};

}

#endif