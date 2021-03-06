/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
@optional
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(BOOL)_shouldUpdateFocusInContext:(id)arg1;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(id)_focusMapContainer;
-(id)_overridingPreferredFocusEnvironment;

@end

