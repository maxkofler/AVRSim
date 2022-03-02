#include "log.h"

Log::Log* hlog;

int main(){
	hlog = new Log::Log(Log::D);

	{
		FUN();

		LOGU("Welcome to AVRSim");
	}

	return 0;
}
