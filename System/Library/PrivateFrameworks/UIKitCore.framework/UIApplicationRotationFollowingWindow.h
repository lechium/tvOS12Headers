/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@interface UIApplicationRotationFollowingWindow : UIWindow
+(BOOL)_isSystemWindow;
-(id)init;
-(void)dealloc;
-(BOOL)_shouldControlAutorotation;
-(BOOL)isInterfaceAutorotationDisabled;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(void)applicationWindowRotated:(id)arg1 ;
-(void)_commonApplicationRotationFollowingWindowInit;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
@end
