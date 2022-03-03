#include "log.h"
#include "cpu.h"

bool USim::CPU::fetch(){
	FUN();

	return true;
}

bool USim::CPU::exec(){
	FUN();
	
	return true;
}