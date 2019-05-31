/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputView.h>

@protocol UIWebFormAccessoryDelegate;
@class UIToolbar, UIBarButtonItem, UIBarButtonItemGroup, UISegmentedControl;

@interface UIWebFormAccessory : UIInputView {

	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _flexibleSpaceItem;
	UIBarButtonItem* _previousItem;
	UIBarButtonItem* _nextItem;
	UIBarButtonItem* _spacer;
	UIBarButtonItemGroup* _buttonGroupAutoFill;
	UIBarButtonItemGroup* _buttonGroupNavigation;
	BOOL _usesUCB;
	UISegmentedControl* _tab;
	UIBarButtonItem* _autofill;
	UIBarButtonItem* _clearButton;
	id<UIWebFormAccessoryDelegate> delegate;

}

@property (nonatomic,retain) UISegmentedControl * _tab;                                  //@synthesize tab=_tab - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _autofill;                                //@synthesize autofill=_autofill - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _clearButton;                             //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic) id<UIWebFormAccessoryDelegate> delegate; 
@property (assign,getter=isNextEnabled,nonatomic) BOOL nextEnabled; 
@property (assign,getter=isPreviousEnabled,nonatomic) BOOL previousEnabled; 
+(id)toolbarWithItems:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<UIWebFormAccessoryDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<UIWebFormAccessoryDelegate>)delegate;
-(UIBarButtonItem *)_clearButton;
-(void)autoFill:(id)arg1 ;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)initForUCB:(id)arg1 ;
-(void)_tabSegmentedControlDidChange:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)_updateFrame;
-(void)_orientationDidChange:(id)arg1 ;
-(void)_refreshAutofillPresentation;
-(void)_applyTreatmentToAutoFillLabel;
-(id)_autoFillButton;
-(void)showAutoFillButtonWithTitle:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)set_clearButton:(UIBarButtonItem *)arg1 ;
-(id)initWithInputAssistantItem:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)hideAutoFillButton;
-(void)showAutoFillButton;
-(void)setClearVisible:(BOOL)arg1 ;
-(void)setNextEnabled:(BOOL)arg1 ;
-(BOOL)isNextEnabled;
-(void)setPreviousEnabled:(BOOL)arg1 ;
-(BOOL)isPreviousEnabled;
-(UISegmentedControl *)_tab;
-(void)set_tab:(UISegmentedControl *)arg1 ;
-(UIBarButtonItem *)_autofill;
-(void)set_autofill:(UIBarButtonItem *)arg1 ;
@end

