/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLMetadataTitleHeaderElement, TVLItemTitleView;

@interface TVLMetadataTitleHeaderView : UIView <ATVUpdatable> {

	TVLMetadataTitleHeaderElement* _element;
	TVLItemTitleView* _titleView;

}
-(id)initWithMetadataTitleHeaderElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)layoutSubviews;
@end
