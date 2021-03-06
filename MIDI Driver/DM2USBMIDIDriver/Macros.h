//
//  Macros.h
//  Busysense
//
//  Created by Joseph Mattiello on 8/19/08.
//  Copyright 2008 Sense Networks. All rights reserved.
//
#ifndef MACROS_H
#define MACROS_H
#pragma mark -
#pragma mark ILog
#pragma mark -
#define ILog(format, ...) CFShow([NSString stringWithFormat:format, ## __VA_ARGS__]);

#pragma mark -
#pragma mark DLogscons prefix=/usr
#pragma mark -
#ifdef DEBUG
	#define DLog(format, ...) NSLog(@"%s %@", __FUNCTION__, [NSString stringWithFormat:format, ## __VA_ARGS__])
#else
	#define DLog(...) 
#endif

#pragma mark -
#pragma mark printd
#pragma mark -
#ifdef DEBUG
//	#define printd(format, ...) printf("%s %s "format"", __FUNCTION__, __LINE__, __VA_ARGS__)
//CFStringGetCStringPtr( CFStringCreateWithFormatAndArguments(kCFAllocatorDefault, nil, CFStringCreateWithCString(kCFAllocatorDefault, format, kCFStringEncodingASCII), __VA_ARGS__)))
#define printd(fmt, args...) printf("%s(%d)"fmt , __FILE__ , __LINE__ , ## args)
#else
	#define printd(...) 
#endif

/* Macros to improve branching in ifs */
#if 0
#define likely(x)       __builtin_expect((x),1)
#define unlikely(x)     __builtin_expect((x),0)
#else
#define likely(x)       x
#define unlikely(x)     x
#endif

#endif // MACROS_H