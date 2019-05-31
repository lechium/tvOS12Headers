/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableView.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface PSSoftwareUpdateTableView : UITableView {

	BOOL _updatesDeferred;
	int _state;
	NSString* _currentVersion;
	UILabel* _checkingStatusLabel;
	UILabel* _subtitleLabel;
	UIActivityIndicatorView* _checkingForUpdateSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * checkingForUpdateSpinner;              //@synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner - In the implementation block
@property (nonatomic,retain) UILabel * checkingStatusLabel;                                   //@synthesize checkingStatusLabel=_checkingStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) int state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * currentVersion;                                       //@synthesize currentVersion=_currentVersion - In the implementation block
@property (assign) BOOL updatesDeferred;                                                      //@synthesize updatesDeferred=_updatesDeferred - In the implementation block
-(NSString *)currentVersion;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(BOOL)updatesDeferred;
-(void)setCurrentVersion:(NSString *)arg1 ;
-(void)setUpdatesDeferred:(BOOL)arg1 ;
-(UILabel *)checkingStatusLabel;
-(void)setCheckingStatusLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)checkingForUpdateSpinner;
-(void)setCheckingForUpdateSpinner:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(int)state;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
@end

