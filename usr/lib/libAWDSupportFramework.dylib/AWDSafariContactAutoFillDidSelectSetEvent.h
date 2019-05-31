/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _selectedSet;
	BOOL _hadPreviouslyCustomizedSet;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedSet; 
@property (assign,nonatomic) int selectedSet;                                 //@synthesize selectedSet=_selectedSet - In the implementation block
@property (assign,nonatomic) BOOL hasHadPreviouslyCustomizedSet; 
@property (assign,nonatomic) BOOL hadPreviouslyCustomizedSet;                 //@synthesize hadPreviouslyCustomizedSet=_hadPreviouslyCustomizedSet - In the implementation block
-(int)selectedSet;
-(void)setSelectedSet:(int)arg1 ;
-(void)setHasSelectedSet:(BOOL)arg1 ;
-(BOOL)hasSelectedSet;
-(id)selectedSetAsString:(int)arg1 ;
-(int)StringAsSelectedSet:(id)arg1 ;
-(void)setHadPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)setHasHadPreviouslyCustomizedSet:(BOOL)arg1 ;
-(BOOL)hasHadPreviouslyCustomizedSet;
-(BOOL)hadPreviouslyCustomizedSet;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

