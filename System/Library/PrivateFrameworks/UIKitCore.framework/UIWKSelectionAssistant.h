/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWebSelectionAssistant.h>

@class _UITextServiceSession, UILongPressGestureRecognizer;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;

}

@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionLongPressRecognizer; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)selectionChanged;
-(void)showSelectionCommands;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 withRange:(NSRange)arg2 fromRect:(CGRect)arg3 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
-(id)interactionView;
-(id)asyncSelectionView;
-(void)initializeSelectionView;
-(UILongPressGestureRecognizer *)selectionLongPressRecognizer;
-(CGRect)selectionFrame;
-(BOOL)shouldHandleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 ;
@end

