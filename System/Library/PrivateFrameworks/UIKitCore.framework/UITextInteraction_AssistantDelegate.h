/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling,NSObject>
@property (assign,nonatomic) BOOL autoscrolled; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (assign,nonatomic) BOOL needsGestureUpdate; 
@property (nonatomic,readonly) BOOL willHandoffLoupeMagnifier; 
@optional
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1;
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@required
-(id)view;
-(id)selectionView;
-(void)setSelectionWithPoint:(CGPoint)arg1;
-(void)scrollSelectionToVisible;
-(void)setGestureRecognizers;
-(BOOL)willHandoffLoupeMagnifier;
-(BOOL)containerIsPlainStyleAtom;
-(void)setFirstResponderIfNecessary;
-(void)notifyKeyboardSelectionChanged;
-(id)rangeForTextReplacement:(id)arg1;
-(void)selectWordWithoutShowingCommands;
-(BOOL)containerIsTextField;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
-(void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)willBeginSelectionInteraction;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
-(void)didEndSelectionInteraction;
-(BOOL)useGesturesForEditableContent;
-(BOOL)viewCouldBecomeEditable:(id)arg1;
-(void)setAutoscrolled:(BOOL)arg1;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1;
-(void)setNeedsGestureUpdate:(BOOL)arg1;
-(void)resetWillHandoffLoupeMagnifier;
-(BOOL)autoscrolled;
-(BOOL)needsGestureUpdate;
-(void)canBeginDragCursor:(id)arg1;
-(BOOL)containerAllowsSelectionTintOnly;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)setSuppressSystemUI:(BOOL)arg1;
-(void)extendSelectionToPoint:(CGPoint)arg1;
-(CGPoint)loupeGestureEndPoint;
-(void)extendSelectionToLoupeOrSetToPoint:(CGPoint)arg1;
-(void)stashCurrentSelection;
-(void)clearStashedSelection;
-(BOOL)didUseStashedSelection;

@end

