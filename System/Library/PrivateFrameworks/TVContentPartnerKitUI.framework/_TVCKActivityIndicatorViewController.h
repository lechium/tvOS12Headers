/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol OS_dispatch_source;
@class UILabel, NSObject, UIActivityIndicatorView, UIVisualEffectView, NSString;

@interface _TVCKActivityIndicatorViewController : UIViewController {

	UILabel* _activityTextLabel;
	BOOL _showingSpinner;
	NSObject*<OS_dispatch_source> _spinnerTimer;
	UIActivityIndicatorView* _spinnerView;
	UIVisualEffectView* _visualEffectView;
	BOOL _activityIndicatorHidden;
	NSString* _activityText;
	double _activityIndicatorDelay;

}

@property (nonatomic,copy) NSString * activityText;                                                      //@synthesize activityText=_activityText - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (assign,nonatomic) double activityIndicatorDelay;                                              //@synthesize activityIndicatorDelay=_activityIndicatorDelay - In the implementation block
-(void)setActivityText:(NSString *)arg1 ;
-(NSString *)activityText;
-(BOOL)isActivityIndicatorHidden;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(double)activityIndicatorDelay;
-(void)setActivityIndicatorDelay:(double)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

