/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSObject;

@interface TVPMusicBarsView : UIView {

	NSArray* _barViews;
	float _repeatCount;
	long long _musicBarsStyle;
	NSObject* _didBecomeActiveNotification;

}

@property (assign,nonatomic) long long musicBarsStyle; 
-(void)_addAnimations;
-(void)_removeAnimations;
-(id)_createBarViews;
-(void)setMusicBarsStyle:(long long)arg1 ;
-(void)resumeAnimatingIfNeeded;
-(void)_addAnimationsWithRepeatCount:(float)arg1 ;
-(void)_setBarHeights:(double)arg1 ;
-(void)_updateMusicBarsStyle;
-(long long)musicBarsStyle;
-(void)resumeAnimating;
-(id)init;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(void)stopAnimating;
@end

