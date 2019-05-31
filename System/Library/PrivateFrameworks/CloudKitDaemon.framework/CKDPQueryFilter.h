/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPQueryFilter : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPRecordFieldIdentifier* _fieldName;
	CKDPRecordFieldValue* _fieldValue;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * fieldValue;                  //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasBounds;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasFieldName;
-(CKDPRecordFieldIdentifier *)fieldName;
-(CKDPRecordFieldValue *)fieldValue;
-(void)setFieldValue:(CKDPRecordFieldValue *)arg1 ;
-(BOOL)hasFieldValue;
-(BOOL)isEqual:(id)arg1 ;
-(CKDPLocationBound *)bounds;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

