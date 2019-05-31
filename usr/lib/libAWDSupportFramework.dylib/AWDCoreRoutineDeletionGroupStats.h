/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {

	unsigned _itemType;
	unsigned _oldestRecordAgeInDays;
	NSMutableArray* _records;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) unsigned itemType;                           //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasOldestRecordAgeInDays; 
@property (assign,nonatomic) unsigned oldestRecordAgeInDays;              //@synthesize oldestRecordAgeInDays=_oldestRecordAgeInDays - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                    //@synthesize records=_records - In the implementation block
+(Class)recordsType;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setHasItemType:(BOOL)arg1 ;
-(BOOL)hasItemType;
-(void)setOldestRecordAgeInDays:(unsigned)arg1 ;
-(void)setHasOldestRecordAgeInDays:(BOOL)arg1 ;
-(BOOL)hasOldestRecordAgeInDays;
-(unsigned)oldestRecordAgeInDays;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)itemType;
-(void)setItemType:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)records;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

