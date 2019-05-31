/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate;

@interface ASDAppUsageStats : NSObject <NSCopying> {

	NSString* _bundleID;
	NSString* _bundleVersion;
	long long _eventTime;
	NSNumber* _evid;
	NSNumber* _itemID;
	NSString* _itemName;
	NSDate* _startDate;
	long long _usageTime;
	long long _usageCount;

}

@property (nonatomic,copy) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) long long eventTime;                 //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) NSNumber * evid;                       //@synthesize evid=_evid - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                     //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                   //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long usageTime;                 //@synthesize usageTime=_usageTime - In the implementation block
@property (assign,nonatomic) long long usageCount;                //@synthesize usageCount=_usageCount - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setEventTime:(long long)arg1 ;
-(long long)eventTime;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)itemName;
-(NSNumber *)itemID;
-(id)_formatTimeInternal:(long long)arg1 ;
-(NSNumber *)evid;
-(void)setEvid:(NSNumber *)arg1 ;
-(long long)usageTime;
-(void)setUsageTime:(long long)arg1 ;
-(long long)usageCount;
-(void)setUsageCount:(long long)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
@end

