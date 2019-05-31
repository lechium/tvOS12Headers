/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSDictionary, NSMutableDictionary, CAMediaTimingFunction;

@interface OKTimerAnimation : NSObject {

	NSTimer* _timer;
	NSDictionary* _fromValues;
	NSDictionary* _toValues;
	double _duration;
	double _currentInterval;
	NSMutableDictionary* _previousValues;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	BOOL _additionally;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) BOOL additionally;                                   //@synthesize additionally=_additionally - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
+(id)animationFromValues:(id)arg1 toValues:(id)arg2 withDuration:(double)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)handleTimer:(id)arg1 ;
-(BOOL)additionally;
-(void)setAdditionally:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)cancel;
-(void)start;
@end

