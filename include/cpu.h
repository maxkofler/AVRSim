#ifndef __USIM_CPU_H__
#define __USIM_CPU_H__

#include <stdint.h>
#include <string>

namespace USim{

	//The core CPU architectures available
	enum CPU_ARCH{
		CPU_ARCH_UNKNOWN,
		CPU_ARCH_NEUMANN,
		CPU_ARCH_HARVARD
	};
	
	/**
	 * @brief	Provides an interface to group together all CPU types for this simulator
	 */
	class CPU{

	public:

		/**
		 * @brief	Returns the cpu architecture
		 */
		virtual CPU_ARCH				getArch() = 0;

		/**
		 * @brief	Returns the name of the CPU architecture
		 */
		virtual std::string				getArchName() = 0;

		/**
		 * @brief	Fetches the next instruction from memory
		 */
		virtual bool					fetch();

		/**
		 * @brief	Executes the previously fetched instruction
		 */
		virtual bool					exec();

	};

}

#endif