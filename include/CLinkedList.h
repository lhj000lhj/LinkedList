/*
* @name: CLinkedList.h
* @author: Liu Hejian
* @date: 2021-11-26
* @version: 1.0
*/
#ifndef __CLINKEDLIST_H__
#define __CLINKEDLIST_H__ //__CLINKEDLIST_H__
#if defined(_WIN32)
#ifdef ICE_CAPI_EXPORTS
#define ICE_CAPI __declspec(dllexport)
#else
#define ICE_CAPI __declspec(dllimport)
#endif //!ICE_CAPI_EXPORTS
#else //Linux or MacOS
#define ICE_CAPI __attribute(__visibility("default"))
#define ICE_CAPI_PRIVATE __attribute(__visibility("hidden"))
#endif //! _WIN32

struct ICE_LinkedList;
typedef struct ICE_LinkedList ICE_LinkedList;

#endif //!__CLINKEDLIST_H__