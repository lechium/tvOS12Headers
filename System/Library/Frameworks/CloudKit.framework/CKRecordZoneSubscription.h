/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,copy) NSString * recordType; 
-(id)initWithZoneID:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

