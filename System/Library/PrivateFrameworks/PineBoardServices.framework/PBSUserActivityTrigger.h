/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface PBSUserActivityTrigger : NSObject {

	BOOL _idle;
	NSString* _name;
	double _timeoutInSeconds;
	id<NSObject> _target;
	SEL _action;

}

@property (assign,getter=isIdle,nonatomic) BOOL idle;                 //@synthesize idle=_idle - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double timeoutInSeconds;               //@synthesize timeoutInSeconds=_timeoutInSeconds - In the implementation block
@property (assign,nonatomic,__weak) id<NSObject> target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
+(id)userActivityTriggerWithName:(id)arg1 timeoutInSeconds:(double)arg2 ;
-(double)timeoutInSeconds;
-(BOOL)isIdle;
-(void)setIdle:(BOOL)arg1 ;
-(NSString *)name;
-(void)setTarget:(id<NSObject>)arg1 ;
-(id<NSObject>)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
@end

