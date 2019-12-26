#include "CppWrapper.h"
#include "apple.h"
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

	struct clsApple
	{
		Apple apple;
	};

	struct clsApple pApple;

	void clsAppleExe(struct clsApple* pApple)
	{
		pApple->apple.Run();
	}

#ifdef __cplusplus
};
#endif