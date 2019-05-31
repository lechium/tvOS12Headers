/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSMutableArray, NSArray;

@interface HMDBackingStoreCacheZone : HMFObject {

	long long _zoneID;
	NSString* _zoneName;
	NSMutableArray* _actualGroups;
	NSMutableArray* _actualShares;

}

@property (retain) NSMutableArray * actualGroups;              //@synthesize actualGroups=_actualGroups - In the implementation block
@property (retain) NSMutableArray * actualShares;              //@synthesize actualShares=_actualShares - In the implementation block
@property (readonly) long long zoneID;                         //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) NSString * zoneName;                      //@synthesize zoneName=_zoneName - In the implementation block
@property (readonly) NSArray * groups; 
@property (readonly) NSArray * shares; 
-(long long)zoneID;
-(NSString *)zoneName;
-(NSMutableArray *)actualGroups;
-(id)dumpDebug;
-(NSMutableArray *)actualShares;
-(id)initWithZoneID:(long long)arg1 name:(id)arg2 ;
-(NSArray *)shares;
-(void)setActualGroups:(NSMutableArray *)arg1 ;
-(void)setActualShares:(NSMutableArray *)arg1 ;
-(NSArray *)groups;
@end

