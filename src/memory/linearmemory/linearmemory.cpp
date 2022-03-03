#include "log.h"
#include "memory/linearmemory.h"

USim::LinearMemory::LinearMemory(size_t s){
	FUN();
	LOGD("Creating new linear memory pool with size " + std::to_string(s));
}