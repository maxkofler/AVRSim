#ifndef __USIM_CPU_H__
#define __USIM_CPU_H__

#include <stdint.h>

namespace USim{

	//The core CPU architectures available
	enum CPU_ARCH{
		CPU_ARCH_NEUMANN,
		CPU_ARCH_HARVARD
	};
	
	/**
	 * @brief	Provides an interface to group together all CPU types for this simulator
	 */
	class CPU{

		/**
		 * @brief	Returns the cpu architecture
		 */
		virtual CPU_ARCH				getArch() = 0;

	};

}

#endif