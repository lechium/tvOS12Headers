/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestStart : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _testName;
	NSString* _uniqueKey;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                       //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueKey; 
@property (nonatomic,retain) NSString * uniqueKey;                      //@synthesize uniqueKey=_uniqueKey - In the implementation block
-(void)setTestName:(NSString *)arg1 ;
-(BOOL)hasTestName;
-(NSString *)testName;
-(void)setUniqueKey:(NSString *)arg1 ;
-(BOOL)hasUniqueKey;
-(NSString *)uniqueKey;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

