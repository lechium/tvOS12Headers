/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSArray, IMRemoteObjectBroadcaster, Protocol, IMMessageContext;

@interface Broadcaster : NSProxy {

	NSArray* _targets;
	IMRemoteObjectBroadcaster* _parent;
	Protocol* _protocol;
	IMMessageContext* _messageContext;
	int _curXPCMessagePriority;
	/*^block*/id _completion;

}

@property (assign,nonatomic) int curXPCMessagePriority;              //@synthesize curXPCMessagePriority=_curXPCMessagePriority - In the implementation block
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 ;
-(void)setCurXPCMessagePriority:(int)arg1 ;
-(void)sendXPCObject:(id)arg1 ;
-(int)curXPCMessagePriority;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

