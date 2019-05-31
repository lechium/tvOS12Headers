/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView {

	double _value;
	double _minimumValue;
	double _maximumValue;
	double _startValue;
	double _endValue;
	UIImageView* _leftFillView;
	UIImageView* _rightFillView;
	unsigned _editingHandle;
	unsigned _editing : 1;
	unsigned _zoomed : 1;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setValue:(double)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)animateFillFramesAway;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(void)setEditingHandle:(int)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)_clampValueAndLayout;
-(void)_updateLeftFill;
-(void)_updateRightFill;
@end

