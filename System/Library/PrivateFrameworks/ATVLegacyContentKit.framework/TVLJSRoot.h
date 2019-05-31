/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@protocol TVLJSRootDelegate;
@class NSMutableDictionary, TVLLegacyJSContext, NSLock;

@interface TVLJSRoot : NSObject <TVLJSObject> {

	NSMutableDictionary* _dateFormatterCache;
	TVLLegacyJSContext* _context;
	OpaqueJSValueRef _jsObjectRef;
	id<TVLJSRootDelegate> _delegate;
	NSMutableDictionary* _timers;
	NSLock* _timersLock;

}

@property (nonatomic,retain) NSMutableDictionary * timers;                       //@synthesize timers=_timers - In the implementation block
@property (nonatomic,retain) NSLock * timersLock;                                //@synthesize timersLock=_timersLock - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                       //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
@property (assign,nonatomic,__weak) id<TVLJSRootDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSMutableDictionary *)timers;
-(void)setTimers:(NSMutableDictionary *)arg1 ;
-(void)_timerFired:(id)arg1 ;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(id)initWithContext:(id)arg1 jsContext:(OpaqueJSContextRef)arg2 ;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
-(id)_startTimer:(double)arg1 repeating:(BOOL)arg2 context:(OpaqueJSContextRef)arg3 callback:(OpaqueJSValueRef)arg4 thisObject:(OpaqueJSValueRef)arg5 args:(const OpaqueJSValue*)arg6 argCount:(unsigned long long)arg7 ;
-(void)_clearTimer:(id)arg1 ;
-(id)_localtime:(id)arg1 context:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
-(NSLock *)timersLock;
-(void)setTimersLock:(NSLock *)arg1 ;
-(void)setDelegate:(id<TVLJSRootDelegate>)arg1 ;
-(id<TVLJSRootDelegate>)delegate;
@end

