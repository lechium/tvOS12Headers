/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRLayerClock : NSObject {

	double _time;
	double _layerDuration;
	double _containerTime;
	double _containerDuration;
	double _localTimeOffset;
	double _stopAtTime;
	long long _currentLoopIndex;
	unsigned long long _flags;

}

@property (assign,nonatomic) double time;                                 //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double layerDuration;                        //@synthesize layerDuration=_layerDuration - In the implementation block
@property (nonatomic,readonly) double croppedContainerTime; 
@property (nonatomic,readonly) double extendedContainerTime;              //@synthesize containerTime=_containerTime - In the implementation block
@property (nonatomic,readonly) double containerDuration;                  //@synthesize containerDuration=_containerDuration - In the implementation block
@property (assign,nonatomic) double localTimeOffset;                      //@synthesize localTimeOffset=_localTimeOffset - In the implementation block
@property (assign,nonatomic) double stopAtTime;                           //@synthesize stopAtTime=_stopAtTime - In the implementation block
@property (nonatomic,readonly) long long currentLoopIndex;                //@synthesize currentLoopIndex=_currentLoopIndex - In the implementation block
@property (nonatomic,readonly) BOOL isPaused; 
@property (nonatomic,readonly) BOOL jumpedBackInTime; 
@property (nonatomic,readonly) BOOL isInPhaseIn; 
@property (nonatomic,readonly) BOOL isInPhaseOut; 
-(double)time;
-(void)setTime:(double)arg1 ;
-(double)layerDuration;
-(void)setLayerDuration:(double)arg1 ;
-(void)reactivate:(BOOL)arg1 ;
-(long long)currentLoopIndex;
-(BOOL)isInPhaseOut;
-(void)updateForTime:(double)arg1 andPlug:(id)arg2 ;
-(void)setParentIsPaused:(BOOL)arg1 ;
-(double)extendedContainerTime;
-(BOOL)jumpedBackInTime;
-(void)resumeOnNextUpdate;
-(void)pauseOnNextUpdate;
-(void)setLocalTimeOffset:(double)arg1 ;
-(double)croppedContainerTime;
-(double)containerDuration;
-(double)localTimeOffset;
-(BOOL)isInPhaseIn;
-(double)stopAtTime;
-(void)setStopAtTime:(double)arg1 ;
-(id)init;
-(BOOL)isPaused;
@end

