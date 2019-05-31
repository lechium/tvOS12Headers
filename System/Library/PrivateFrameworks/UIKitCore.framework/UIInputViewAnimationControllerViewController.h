/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInputViewAnimationController.h>

@protocol UIViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning_Keyboard;
@class UIInputViewSetPlacement, NSString;

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {

	id<UIViewControllerContextTransitioning> _context;
	id<UIViewControllerAnimatedTransitioning_Keyboard> _animator;
	UIInputViewSetPlacement* _endPlacement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(void)performAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg1 context:(id)arg2 ;
@end
