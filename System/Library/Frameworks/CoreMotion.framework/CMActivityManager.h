/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) BOOL activityAvailable; 
-(long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(id)activityHandler;
-(void)setActivityHandler:(id)arg1 ;
-(BOOL)isActivityAvailable;
-(id)init;
-(void)dealloc;
@end
