/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject, NSData;

@interface NEPolicySession : NSObject <NEPrettyDescription> {

	unsigned _lastSendMessageID;
	int _sessionFD;
	long long _internalPriority;
	NSMutableDictionary* _policies;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_semaphore> _responseSemaphore;
	NSData* _lastReceivedResponse;

}

@property (assign) long long internalPriority;                                      //@synthesize internalPriority=_internalPriority - In the implementation block
@property (retain) NSMutableDictionary * policies;                                  //@synthesize policies=_policies - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> ioQueue;                            //@synthesize ioQueue=_ioQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> responseSemaphore;              //@synthesize responseSemaphore=_responseSemaphore - In the implementation block
@property (retain) NSData * lastReceivedResponse;                                   //@synthesize lastReceivedResponse=_lastReceivedResponse - In the implementation block
@property (assign) unsigned lastSendMessageID;                                      //@synthesize lastSendMessageID=_lastSendMessageID - In the implementation block
@property (assign) int sessionFD;                                                   //@synthesize sessionFD=_sessionFD - In the implementation block
@property (assign) long long priority; 
+(void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void*)arg4 ;
+(id)copyTLVForBytes:(const char*)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(BOOL)arg4 n:(int)arg5 ;
+(unsigned char)getTLVtypeForBytes:(const char*)arg1 includeHeaderOffset:(BOOL)arg2 nextTLVOffset:(unsigned*)arg3 ;
+(BOOL)isTLVValid:(char*)arg1 cursorCurrent:(char*)arg2 totalLength:(unsigned long long)arg3 ;
+(id)readTLVOfType:(unsigned char)arg1 startCursor:(char*)arg2 currentCursor:(char**)arg3 totalLength:(unsigned long long)arg4 readTLVInstance:(unsigned)arg5 ;
+(id)policyDumpFromData:(id)arg1 ;
+(id)parseTLVResponseForDump:(id)arg1 ;
+(id)errorFromMessage:(id)arg1 ;
+(unsigned)policyIDFromMessage:(id)arg1 ;
+(unsigned)messageIDForMessage:(id)arg1 ;
-(unsigned long long)addPolicy:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(int)dupSocket;
-(id)initWithSocket:(int)arg1 ;
-(BOOL)lockSessionToCurrentProcess;
-(BOOL)registerServiceUUID:(id)arg1 ;
-(BOOL)unregisterServiceUUID:(id)arg1 ;
-(BOOL)removePolicyWithID:(unsigned long long)arg1 ;
-(BOOL)removeAllPolicies;
-(int)sessionFD;
-(id)priorityString;
-(long long)internalPriority;
-(unsigned)lastSendMessageID;
-(void)setLastSendMessageID:(unsigned)arg1 ;
-(void)setInternalPriority:(long long)arg1 ;
-(id)createTLVMessage:(unsigned char)arg1 ;
-(id)dumpKernelPolicies;
-(id)policyWithID:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)ioQueue;
-(void)setIoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)responseSemaphore;
-(void)setResponseSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSData *)lastReceivedResponse;
-(void)setLastReceivedResponse:(NSData *)arg1 ;
-(void)setSessionFD:(int)arg1 ;
-(NSMutableDictionary *)policies;
-(void)setPolicies:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(BOOL)apply;
@end

