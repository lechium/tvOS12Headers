/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMHome, HMTrigger, NSString;

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol> {

	HMHome* _home;
	HMTrigger* _trigger;

}

@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMTrigger * trigger;                            //@synthesize trigger=_trigger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)iconDescriptorForTriggerType:(unsigned long long)arg1 ;
-(HMHome *)home;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)_descriptionForTrigger:(id)arg1 effectivelyEnabled:(BOOL)arg2 ;
-(id)_uniqueServiceGroupForServices:(id)arg1 ;
-(id)initWithHome:(id)arg1 trigger:(id)arg2 ;
-(id)init;
-(HMTrigger *)trigger;
@end

