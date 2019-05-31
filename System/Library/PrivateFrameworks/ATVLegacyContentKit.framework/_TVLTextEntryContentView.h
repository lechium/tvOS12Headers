/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface _TVLTextEntryContentView : UIView {

	UIView* _textEntryView;
	UILabel* _footnoteLabel;

}

@property (nonatomic,retain) UIView * textEntryView;                 //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(UIView *)textEntryView;
-(UILabel *)footnoteLabel;
-(void)setTextEntryView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
