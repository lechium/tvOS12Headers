/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIAlertControllerShadowedScrollView.h>

@class NSArray, UIView;

@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView {

	NSArray* _constraints;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)updateConstraints;
-(void)accessoryInsetsDidChange:(UIEdgeInsets)arg1 ;
-(double)_contentFitCanScrollThreshold;
@end
