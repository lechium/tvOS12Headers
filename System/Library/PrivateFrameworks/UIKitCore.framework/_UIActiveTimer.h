/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface _UIActiveTimer : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _updateHandler;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(void)invalidate;
-(void)_tick:(id)arg1 ;
-(id)initWithDuration:(double)arg1 updateHandler:(/*^block*/id)arg2 ;
-(BOOL)isComplete;
@end

