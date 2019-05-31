/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIAtomTextView.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement.h>
#import <UIKitCore/_UISearchAtomViewTappedStateProtocol.h>

@class __UIAtomSearchBarFieldEditorBackgroundView, _UISearchAtomFieldEditor, _UIAtomSearchBar, NSString;

@interface _UISearchAtomTextView : _UIAtomTextView <_UISearchBarTextFieldOrMailReplacement, _UISearchAtomViewTappedStateProtocol> {

	__UIAtomSearchBarFieldEditorBackgroundView* _effectBackgroundBottom;
	__UIAtomSearchBarFieldEditorBackgroundView* _effectBackgroundTop;
	BOOL _tapped;

}

@property (getter=_fieldEditor,nonatomic,readonly) _UISearchAtomFieldEditor * fieldEditor; 
@property (getter=_searchBar,nonatomic,readonly) _UIAtomSearchBar * searchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isTapped,nonatomic) BOOL tapped;                                               //@synthesize tapped=_tapped - In the implementation block
+(Class)_fieldEditorClass;
+(Class)_backgroundViewClass;
-(void)setText:(id)arg1 ;
-(id)textInputTraits;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1 ;
-(id)searchText;
-(void)_setForegroundViewsAlpha:(double)arg1 ;
-(void)_setBackgroundViewsAlpha:(double)arg1 ;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(id)_searchBar;
-(id)_fieldEditor;
-(void)setTapped:(BOOL)arg1 ;
-(BOOL)isTapped;
@end

