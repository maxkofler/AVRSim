#ifndef __USIM_LINEARMEMORY_H__
#define __USIM_LINEARMEMORY_H__

#include <stdint.h>

namespace USim{

	/**
	 * @brief	Interface to represent linear, byte-sized memory
	 */
	class LinearMemory{

	public:

		/**
		 * @brief	Allocate a new memory region
		 * @param	size_bytes			The amount of bytes to reserve
		 */
		LinearMemory(size_t size_bytes);

	};

}

#endif