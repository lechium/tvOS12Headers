/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, NSTimer, NSDate, OKProgressArcLayer;

@interface OKRoundProgressView : UIView {

	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	NSDate* _prevUpdateTime;
	OKProgressArcLayer* __progressArcLayer;
	double __contentsScale;
	double _progress;
	long long _style;

}

@property (setter=_setProgressArcLayer:,nonatomic,retain) OKProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) double _contentsScale;                                  //@synthesize _contentsScale=__contentsScale - In the implementation block
@property (nonatomic,readonly) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double progress;                                                                  //@synthesize progress=_progress - In the implementation block
-(void)_setupSubviews;
-(void)_setContentsScale:(double)arg1 ;
-(void)_updateSublayersContentsScale;
-(double)_contentsScale;
-(OKProgressArcLayer *)_progressArcLayer;
-(void)resetProgress;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(void)stopProgressTimer;
-(double)toRadian:(double)arg1 ;
-(void)startProgressTimer;
-(void)setInitialIncreaseRatePerFrame:(double)arg1 ;
-(void)setPieRadius:(double)arg1 ;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)style;
-(void)didMoveToWindow;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(double)progress;
@end

