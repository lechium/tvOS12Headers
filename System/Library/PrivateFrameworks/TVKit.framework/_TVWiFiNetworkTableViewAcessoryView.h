/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIActivityIndicatorView;

@interface _TVWiFiNetworkTableViewAcessoryView : UIView {

	UIImageView* _padlockView;
	UIImageView* _signalStrengthView;
	UIImageView* _disclosureView;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,readonly) UIImageView * padlockView;                          //@synthesize padlockView=_padlockView - In the implementation block
@property (nonatomic,readonly) UIImageView * signalStrengthView;                   //@synthesize signalStrengthView=_signalStrengthView - In the implementation block
@property (nonatomic,readonly) UIImageView * disclosureView;                       //@synthesize disclosureView=_disclosureView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(UIActivityIndicatorView *)spinnerView;
-(UIImageView *)disclosureView;
-(UIImageView *)signalStrengthView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)padlockView;
@end

