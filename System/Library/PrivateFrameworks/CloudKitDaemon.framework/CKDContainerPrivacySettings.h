/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject {

	CKContainerID* _containerID;
	NSSet* _applicationBundleIDs;
	long long _discoverable;

}

@property (nonatomic,copy) CKContainerID * containerID;               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSSet * applicationBundleIDs;              //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) long long discoverable;                  //@synthesize discoverable=_discoverable - In the implementation block
-(CKContainerID *)containerID;
-(id)CKPropertiesDescription;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSSet *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

