/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarVisualStyle_Base.h>

@class NSArray, UIFont, UIColor;

@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	UIColor* _nonTrackingBackgroundColor;

}

@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;              //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
-(id)font;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFocused;
-(id)initWithView:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(BOOL)overlay;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1 ;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)indexColorUpdated;
-(UIColor *)nonTrackingBackgroundColor;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
@end
