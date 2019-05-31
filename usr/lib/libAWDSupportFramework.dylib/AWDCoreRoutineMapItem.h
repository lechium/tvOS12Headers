/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineMapItem : PBCodable <NSCopying> {

	SCD_Struct_AW14* _mapItemSources;
	BOOL _hasMuid;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) unsigned long long mapItemSourcesCount; 
@property (nonatomic,readonly) int* mapItemSources; 
@property (assign,nonatomic) BOOL hasHasMuid; 
@property (assign,nonatomic) BOOL hasMuid;                                          //@synthesize hasMuid=_hasMuid - In the implementation block
-(unsigned long long)mapItemSourcesCount;
-(void)clearMapItemSources;
-(int)mapItemSourcesAtIndex:(unsigned long long)arg1 ;
-(void)addMapItemSources:(int)arg1 ;
-(int*)mapItemSources;
-(void)setMapItemSources:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mapItemSourcesAsString:(int)arg1 ;
-(int)StringAsMapItemSources:(id)arg1 ;
-(void)setHasHasMuid:(BOOL)arg1 ;
-(BOOL)hasHasMuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

