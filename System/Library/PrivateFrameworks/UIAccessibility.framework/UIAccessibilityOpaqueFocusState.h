/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject {

	BOOL _hasFocus;
	BOOL _hasBeenReused;
	id _element;
	UIView* _reusableView;
	CGRect _sceneRelativeFrame;

}

@property (assign,nonatomic,__weak) id element;                      //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) BOOL hasFocus;                          //@synthesize hasFocus=_hasFocus - In the implementation block
@property (assign,nonatomic) CGRect sceneRelativeFrame;              //@synthesize sceneRelativeFrame=_sceneRelativeFrame - In the implementation block
@property (nonatomic,retain) UIView * reusableView;                  //@synthesize reusableView=_reusableView - In the implementation block
@property (assign,nonatomic) BOOL hasBeenReused;                     //@synthesize hasBeenReused=_hasBeenReused - In the implementation block
-(BOOL)hasFocus;
-(CGRect)sceneRelativeFrame;
-(UIView *)reusableView;
-(BOOL)hasBeenReused;
-(void)setHasFocus:(BOOL)arg1 ;
-(void)setElement:(id)arg1 ;
-(void)setSceneRelativeFrame:(CGRect)arg1 ;
-(void)setReusableView:(UIView *)arg1 ;
-(void)setHasBeenReused:(BOOL)arg1 ;
-(id)element;
-(id)description;
@end

