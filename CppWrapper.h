#ifndef _CPP_WRAPPER_H__
#define _CPP_WRAPPER_H__

struct classWrapper;

#ifdef __cplusplus
extern "C" {
#endif

extern struct clsApple pApple;
extern void clsAppleExe(struct clsApple* pApple);

#ifdef __cplusplus
};
#endif

#endif