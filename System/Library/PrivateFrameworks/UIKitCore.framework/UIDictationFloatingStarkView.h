/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDimmingView, NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {

	UIDimmingView* _dimmingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)show;
-(void)setState:(int)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)returnToKeyboard;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(CGPoint)positionForShow;
-(void)endpointButtonPressed;
-(void)setInputViewsHiddenForDictation:(BOOL)arg1 ;
@end

