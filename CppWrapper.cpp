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

	struct clsApple* pApple = (struct clsApple*)malloc(sizeof(struct clsApple));

	//struct clsApple* GetInstance(void)
	//{
	//	return new struct clsApple;
	//}

	//void ReleaseInstance(struct clsApple** ppInstance)
	//{
	//	delete* ppInstance;
	//	*ppInstance = 0;
	//}

	void clsAppleExe(struct clsApple* pApple)
	{
		pApple->apple.Run();
	}

#ifdef __cplusplus
};
#endif