/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class _TVWiFiNetworkTableViewAcessoryView;

@interface TVWiFiNetworkTableViewCell : UITableViewCell {

	BOOL _showsSignalStrength;
	BOOL _showsPadlock;
	BOOL _showsSpinner;
	BOOL _showsDisclosureIndicator;
	float _signalStrength;
	_TVWiFiNetworkTableViewAcessoryView* _customAccessoryView;

}

@property (nonatomic,readonly) _TVWiFiNetworkTableViewAcessoryView * customAccessoryView;              //@synthesize customAccessoryView=_customAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL showsSignalStrength;                                                 //@synthesize showsSignalStrength=_showsSignalStrength - In the implementation block
@property (assign,nonatomic) BOOL showsPadlock;                                                        //@synthesize showsPadlock=_showsPadlock - In the implementation block
@property (assign,nonatomic) BOOL showsSpinner;                                                        //@synthesize showsSpinner=_showsSpinner - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosureIndicator;                                            //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (assign,nonatomic) float signalStrength;                                                     //@synthesize signalStrength=_signalStrength - In the implementation block
-(BOOL)showsDisclosureIndicator;
-(void)setShowsDisclosureIndicator:(BOOL)arg1 ;
-(float)signalStrength;
-(void)setSignalStrength:(float)arg1 ;
-(void)_updateAccessoryTintColor;
-(void)setShowsSignalStrength:(BOOL)arg1 ;
-(void)setShowsPadlock:(BOOL)arg1 ;
-(void)setShowsSpinner:(BOOL)arg1 ;
-(BOOL)showsSignalStrength;
-(BOOL)showsPadlock;
-(BOOL)showsSpinner;
-(_TVWiFiNetworkTableViewAcessoryView *)customAccessoryView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

