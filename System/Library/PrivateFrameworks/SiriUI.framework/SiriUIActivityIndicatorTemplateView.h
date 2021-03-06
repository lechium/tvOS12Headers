/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIBaseTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView> {

	UILabel* _detailTextLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UILabel * detailTextLabel;                                               //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                                   //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIActivityIndicatorTemplateModel> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
-(id)initWithDataSource:(id)arg1 ;
-(double)desiredHeight;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(UILabel *)detailTextLabel;
@end

