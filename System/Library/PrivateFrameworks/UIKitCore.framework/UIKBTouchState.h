/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIWindow, NSUUID;

@interface UIKBTouchState : NSObject <NSCopying> {

	double _timestamp;
	long long _phase;
	UIWindow* _window;
	double _pathMajorRadius;
	unsigned long long _pathIndex;
	NSUUID* _touchUUID;
	unsigned long long _tapCount;
	CGPoint _locationInWindow;

}

@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;                  //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,readonly) double pathMajorRadius;                    //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex;              //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) NSUUID * touchUUID;                        //@synthesize touchUUID=_touchUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long tapCount;               //@synthesize tapCount=_tapCount - In the implementation block
+(id)touchUUIDForTouch:(id)arg1 ;
+(id)touchForTouchUUID:(id)arg1 ;
+(id)touchesForTouchUUIDs:(id)arg1 ;
+(id)touchUUIDsForTouches:(id)arg1 ;
+(void)releaseUUIDForTouch:(id)arg1 ;
+(id)touchStateForTouch:(id)arg1 ;
+(id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(long long)arg3 location:(CGPoint)arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6 ;
-(void)dealloc;
-(UIWindow *)window;
-(id)description;
-(CGPoint)locationInView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(long long)phase;
-(unsigned long long)tapCount;
-(CGPoint)locationInWindow;
-(double)pathMajorRadius;
-(unsigned long long)pathIndex;
-(NSUUID *)touchUUID;
@end

