/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSUIBlackScreenRecoveryViewController, NSArray;

@interface TVSUIBlackScreenRecoveryIterator : NSObject {

	double _interval;
	TVSUIBlackScreenRecoveryViewController* _currentController;
	NSArray* _modesToTry;
	unsigned long long _currentModeIndex;
	/*^block*/id _iterationBlock;

}

@property (nonatomic,retain) TVSUIBlackScreenRecoveryViewController * currentController;              //@synthesize currentController=_currentController - In the implementation block
@property (nonatomic,retain) NSArray * modesToTry;                                                    //@synthesize modesToTry=_modesToTry - In the implementation block
@property (assign,nonatomic) unsigned long long currentModeIndex;                                     //@synthesize currentModeIndex=_currentModeIndex - In the implementation block
@property (assign,nonatomic) double interval;                                                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id iterationBlock;                                                         //@synthesize iterationBlock=_iterationBlock - In the implementation block
+(id)scheduleIterationForDisplayModes:(id)arg1 iterationInterval:(double)arg2 iterationBlock:(/*^block*/id)arg3 ;
-(void)setModesToTry:(NSArray *)arg1 ;
-(void)setCurrentModeIndex:(unsigned long long)arg1 ;
-(void)setIterationBlock:(id)arg1 ;
-(void)_switchToNextMode;
-(TVSUIBlackScreenRecoveryViewController *)currentController;
-(void)setCurrentController:(TVSUIBlackScreenRecoveryViewController *)arg1 ;
-(id)iterationBlock;
-(NSArray *)modesToTry;
-(unsigned long long)currentModeIndex;
-(void)stop;
-(void)setInterval:(double)arg1 ;
-(double)interval;
@end

