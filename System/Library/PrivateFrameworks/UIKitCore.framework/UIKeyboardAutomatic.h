/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboard.h>

@interface UIKeyboardAutomatic : UIKeyboard {

	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	BOOL caretBlinks;

}

@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
@property (assign,nonatomic) BOOL caretBlinks; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isActive;
-(void)activate;
-(void)minimize;
-(void)maximize;
-(void)didSuspend:(id)arg1 ;
-(void)willResume:(id)arg1 ;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(BOOL)showsCandidateBar;
-(BOOL)isAutomatic;
-(BOOL)caretBlinks;
-(BOOL)showsCandidateInline;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
-(BOOL)_isAutomaticKeyboard;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1 ;
@end

