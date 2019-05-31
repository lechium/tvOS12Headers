/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDDuetExpertCenterZKWOutcome : PBCodable <NSCopying> {

	unsigned long long _egress;
	unsigned long long _expert;
	unsigned long long _timestamp;
	unsigned _itemsShown;
	BOOL _engaged;
	BOOL _itemSelected;
	BOOL _sameCategorySelected;
	BOOL _typedQuery;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasExpert; 
@property (assign,nonatomic) unsigned long long expert;                 //@synthesize expert=_expert - In the implementation block
@property (assign,nonatomic) BOOL hasEngaged; 
@property (assign,nonatomic) BOOL engaged;                              //@synthesize engaged=_engaged - In the implementation block
@property (assign,nonatomic) BOOL hasItemsShown; 
@property (assign,nonatomic) unsigned itemsShown;                       //@synthesize itemsShown=_itemsShown - In the implementation block
@property (assign,nonatomic) BOOL hasTypedQuery; 
@property (assign,nonatomic) BOOL typedQuery;                           //@synthesize typedQuery=_typedQuery - In the implementation block
@property (assign,nonatomic) BOOL hasItemSelected; 
@property (assign,nonatomic) BOOL itemSelected;                         //@synthesize itemSelected=_itemSelected - In the implementation block
@property (assign,nonatomic) BOOL hasEgress; 
@property (assign,nonatomic) unsigned long long egress;                 //@synthesize egress=_egress - In the implementation block
@property (assign,nonatomic) BOOL hasSameCategorySelected; 
@property (assign,nonatomic) BOOL sameCategorySelected;                 //@synthesize sameCategorySelected=_sameCategorySelected - In the implementation block
-(void)setExpert:(unsigned long long)arg1 ;
-(void)setHasExpert:(BOOL)arg1 ;
-(BOOL)hasExpert;
-(void)setEngaged:(BOOL)arg1 ;
-(void)setHasEngaged:(BOOL)arg1 ;
-(BOOL)hasEngaged;
-(void)setItemsShown:(unsigned)arg1 ;
-(void)setHasItemsShown:(BOOL)arg1 ;
-(BOOL)hasItemsShown;
-(void)setTypedQuery:(BOOL)arg1 ;
-(void)setHasTypedQuery:(BOOL)arg1 ;
-(BOOL)hasTypedQuery;
-(void)setItemSelected:(BOOL)arg1 ;
-(void)setHasItemSelected:(BOOL)arg1 ;
-(BOOL)hasItemSelected;
-(void)setEgress:(unsigned long long)arg1 ;
-(void)setHasEgress:(BOOL)arg1 ;
-(BOOL)hasEgress;
-(void)setSameCategorySelected:(BOOL)arg1 ;
-(void)setHasSameCategorySelected:(BOOL)arg1 ;
-(BOOL)hasSameCategorySelected;
-(unsigned long long)expert;
-(BOOL)engaged;
-(unsigned)itemsShown;
-(BOOL)typedQuery;
-(BOOL)itemSelected;
-(unsigned long long)egress;
-(BOOL)sameCategorySelected;
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

