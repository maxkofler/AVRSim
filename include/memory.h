#ifndef __USIM_MEMORY_H__
#define __USIM_MEMORY_H__

namespace USim{

	/**
	 * @brief	Parent class that provides an interface to memory
	 */
	class Memory{

	public:
		/**
		 * @brief	Create a new memory pool
		 * @param	size_bytes		The size of the memory in bytes
		 */
		Memory(size_t size_bytes);

	};

}

#endif