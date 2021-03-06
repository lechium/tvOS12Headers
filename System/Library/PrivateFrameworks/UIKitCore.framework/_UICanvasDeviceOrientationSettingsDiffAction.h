/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICanvasSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, FBSSceneSettingsDiffInspector, NSString;

@interface _UICanvasDeviceOrientationSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDeviceOrientationDiffInspector;

}

@property (nonatomic,readonly) FBSSceneSettingsDiffInspector * sceneSettingsDeviceOrientationDiffInspector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSSceneSettingsDiffInspector *)sceneSettingsDeviceOrientationDiffInspector;
-(void)_updateDeviceOrientationWithSettingObserverContext:(SCD_Struct_UI20)arg1 canvas:(id)arg2 transitionContext:(id)arg3 ;
-(void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 ;
@end

