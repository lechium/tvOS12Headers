/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ACProtobufVariableValueList, NSData, ACProtobufDate, ACProtobufVariableValueDictionary, NSString, ACProtobufURL, ACProtobufUUID;

@interface ACProtobufVariableValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	unsigned long long _unsignedIntegerValue;
	ACProtobufVariableValueList* _arrayValue;
	NSData* _dataValue;
	ACProtobufDate* _dateValue;
	ACProtobufVariableValueDictionary* _dictionaryValue;
	ACProtobufVariableValueList* _setValue;
	NSString* _stringValue;
	ACProtobufURL* _urlValue;
	ACProtobufUUID* _uuidValue;
	SCD_Struct_AC2 _has;

}

@property (nonatomic,retain) id object; 
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                           //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                                           //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasUnsignedIntegerValue; 
@property (assign,nonatomic) unsigned long long unsignedIntegerValue;                          //@synthesize unsignedIntegerValue=_unsignedIntegerValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                               //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                                               //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidValue; 
@property (nonatomic,retain) ACProtobufUUID * uuidValue;                                       //@synthesize uuidValue=_uuidValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) ACProtobufDate * dateValue;                                       //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlValue; 
@property (nonatomic,retain) ACProtobufURL * urlValue;                                         //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) BOOL hasArrayValue; 
@property (nonatomic,retain) ACProtobufVariableValueList * arrayValue;                         //@synthesize arrayValue=_arrayValue - In the implementation block
@property (nonatomic,readonly) BOOL hasSetValue; 
@property (nonatomic,retain) ACProtobufVariableValueList * setValue;                           //@synthesize setValue=_setValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDictionaryValue; 
@property (nonatomic,retain) ACProtobufVariableValueDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
-(void)setUuidValue:(ACProtobufUUID *)arg1 ;
-(void)setArrayValue:(ACProtobufVariableValueList *)arg1 ;
-(void)setDictionaryValue:(ACProtobufVariableValueDictionary *)arg1 ;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 ;
-(void)setHasUnsignedIntegerValue:(BOOL)arg1 ;
-(BOOL)hasUnsignedIntegerValue;
-(BOOL)hasUuidValue;
-(BOOL)hasArrayValue;
-(BOOL)hasSetValue;
-(BOOL)hasDictionaryValue;
-(ACProtobufUUID *)uuidValue;
-(ACProtobufVariableValueList *)arrayValue;
-(BOOL)_setObject:(id)arg1 ;
-(id)initWithObjectValue:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUrlValue:(ACProtobufURL *)arg1 ;
-(BOOL)hasUrlValue;
-(ACProtobufURL *)urlValue;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setIntegerValue:(long long)arg1 ;
-(BOOL)hasIntegerValue;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(ACProtobufDate *)dateValue;
-(ACProtobufVariableValueDictionary *)dictionaryValue;
-(void)setDataValue:(NSData *)arg1 ;
-(BOOL)hasDataValue;
-(NSData *)dataValue;
-(void)setDateValue:(ACProtobufDate *)arg1 ;
-(BOOL)hasDateValue;
-(ACProtobufVariableValueList *)setValue;
-(void)setSetValue:(ACProtobufVariableValueList *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)integerValue;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(id)object;
-(double)doubleValue;
-(unsigned long long)unsignedIntegerValue;
-(void)setObject:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStringValue:(NSString *)arg1 ;
@end

