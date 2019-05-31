/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation;

@interface _UIActionWhenIdle : NSObject {

	NSInvocation* _invocation;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
+(id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)invoke;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(void)addObserverToRunLoop;
@end

