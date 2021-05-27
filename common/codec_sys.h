/*************************************************************************
	> File Name: codec_sys.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年05月24日 星期一 19时22分21秒
 ************************************************************************/

#ifndef __CODEC_SYS__H
#define __CODEC_SYS__H

#ifdef __cplusplus
extern "C" {
#endif

#if defined _WIN32
#define likely(x)   		(x)
#define unlikely(x) 		(x)
#else // GCC (version >= 2.96）
#define likely(x)   		__builtin_expect(!!(x), 1)
#define unlikely(x) 		__builtin_expect(!!(x), 0)
#endif

#ifdef __cplusplus
}
#endif

#endif
