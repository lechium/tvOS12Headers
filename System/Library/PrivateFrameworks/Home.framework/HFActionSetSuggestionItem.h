/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, NSString;

@interface HFActionSetSuggestionItem : HFItem {

	HMHome* _home;
	NSString* _builtInActionSetType;

}

@property (nonatomic,readonly) HMHome * home;                                //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSString * builtInActionSetType;              //@synthesize builtInActionSetType=_builtInActionSetType - In the implementation block
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSString *)builtInActionSetType;
-(id)_builtInActionSetOfType:(id)arg1 ;
-(id)_actionSetBuilderForBuiltInActionSetType:(id)arg1 outDependentServiceTypes:(out id*)arg2 ;
-(id)_actionBuildersToSetPowerState:(BOOL)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetLightbulbBrightness:(double)arg1 ;
-(id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1 ;
-(id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)arg1 ;
-(id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1 ;
-(id)_controlItemValueSourceForService:(id)arg1 ;
-(id)initWithHome:(id)arg1 builtInActionSetType:(id)arg2 ;
-(id)init;
@end

