/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewInProcessAnimationState.h>

@class _UICompoundObjectMap;

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState {

	_UICompoundObjectMap* _capturedProperties;

}

@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
-(id)init;
-(_UICompoundObjectMap *)capturedProperties;
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
@end

