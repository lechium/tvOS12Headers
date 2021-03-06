/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFPairingIdentity, NSMutableArray;

@interface __HMDRegisteredIdentity : HMFObject {

	HMFPairingIdentity* _identity;
	NSMutableArray* _registeredObjects;

}

@property (copy,readonly) HMFPairingIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) NSMutableArray * registeredObjects;              //@synthesize registeredObjects=_registeredObjects - In the implementation block
-(NSMutableArray *)registeredObjects;
-(id)initWithIdentity:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(HMFPairingIdentity *)identity;
@end

