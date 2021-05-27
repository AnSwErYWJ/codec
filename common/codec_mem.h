/*************************************************************************
	> File Name: codec_mem.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年05月24日 星期一 19时27分38秒
 ************************************************************************/

#ifndef __CODEC_MEM__H
#define __CODEC_MEM__H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef CODEC_MALLOC
#define CODEC_MALLOC malloc
#endif

#ifndef CODEC_CALLOC
#define CODEC_CALLOC calloc
#endif

#ifndef CODEC_REALLOC
#define CODEC_REALLOC realloc
#endif

#ifndef CODEC_FREE
#define CODEC_FREE free
#endif

#ifdef __cplusplus
}
#endif

#endif
