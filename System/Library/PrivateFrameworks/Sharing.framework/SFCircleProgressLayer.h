/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface SFCircleProgressLayer : CALayer {

	double _progressLineWidth;
	double _oneFullRotation;
	BOOL _showProgressTray;
	long long _progressStartPoint;
	UIColor* _progressColor;
	UIColor* _progressBackgroundColor;

}

@property (assign,nonatomic) long long progressStartPoint;                   //@synthesize progressStartPoint=_progressStartPoint - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                        //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (assign,nonatomic) double progressLineWidth;                       //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) BOOL showProgressTray;                          //@synthesize showProgressTray=_showProgressTray - In the implementation block
@property (assign,nonatomic) double progress; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(void)setProgressStartPoint:(long long)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(long long)progressStartPoint;
-(UIColor *)progressColor;
-(UIColor *)progressBackgroundColor;
-(double)progressLineWidth;
-(BOOL)showProgressTray;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

