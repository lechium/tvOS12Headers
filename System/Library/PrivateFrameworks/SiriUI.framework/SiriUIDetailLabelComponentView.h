/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUILabelComponentView.h>

@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView {

	UILabel* _mainLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * mainLabel;                //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(id)viewForComponent:(id)arg1 ;
-(void)addSubviewsForComponentModel:(id)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)mainLabel;
-(void)setMainLabel:(UILabel *)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
@end

