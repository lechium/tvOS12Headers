/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSessionID, NSString;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {

	HMDCameraSessionID* _sessionID;
	NSString* _applicationIdentifier;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
-(HMDCameraSessionID *)sessionID;
-(id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
@end
