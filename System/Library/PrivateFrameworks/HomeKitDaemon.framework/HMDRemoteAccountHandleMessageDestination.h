/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDAccountHandle;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination {

	BOOL _multicast;
	HMDAccountHandle* _handle;

}

@property (copy,readonly) HMDAccountHandle * handle;                 //@synthesize handle=_handle - In the implementation block
@property (getter=isMulticast,readonly) BOOL multicast;              //@synthesize multicast=_multicast - In the implementation block
+(id)shortDescription;
-(HMDAccountHandle *)handle;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 ;
-(id)remoteDestinationString;
-(BOOL)isMulticast;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
@end

