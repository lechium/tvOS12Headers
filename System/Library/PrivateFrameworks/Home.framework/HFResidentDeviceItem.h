/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMResidentDevice, NSString;

@interface HFResidentDeviceItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMResidentDevice* _residentDevice;

}

@property (nonatomic,readonly) HMResidentDevice * residentDevice;              //@synthesize residentDevice=_residentDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithResidentDevice:(id)arg1 ;
-(HMResidentDevice *)residentDevice;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

