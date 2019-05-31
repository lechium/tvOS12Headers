/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class RTDeviceMO, NSString, NSData, NSUUID, NSDate;

@interface RTCloudManagedObject : NSManagedObject

@property (nonatomic,retain) RTDeviceMO * device; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,copy) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
-(void)awakeFromInsert;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
@end
