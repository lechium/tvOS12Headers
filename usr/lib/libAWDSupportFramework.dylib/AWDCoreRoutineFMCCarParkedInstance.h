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

@class NSString;

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _horizontalAccuracy;
	int _locationType;
	NSString* _parkingId;
	int _qualityIndicator;
	int _triggerTypes;
	BOOL _userAssistanceRequired;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingId; 
@property (nonatomic,retain) NSString * parkingId;                        //@synthesize parkingId=_parkingId - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerTypes; 
@property (assign,nonatomic) int triggerTypes;                            //@synthesize triggerTypes=_triggerTypes - In the implementation block
@property (assign,nonatomic) BOOL hasUserAssistanceRequired; 
@property (assign,nonatomic) BOOL userAssistanceRequired;                 //@synthesize userAssistanceRequired=_userAssistanceRequired - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) int horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasQualityIndicator; 
@property (assign,nonatomic) int qualityIndicator;                        //@synthesize qualityIndicator=_qualityIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                            //@synthesize locationType=_locationType - In the implementation block
-(void)setParkingId:(NSString *)arg1 ;
-(BOOL)hasParkingId;
-(NSString *)parkingId;
-(void)setTriggerTypes:(int)arg1 ;
-(void)setHasTriggerTypes:(BOOL)arg1 ;
-(BOOL)hasTriggerTypes;
-(void)setUserAssistanceRequired:(BOOL)arg1 ;
-(void)setHasUserAssistanceRequired:(BOOL)arg1 ;
-(BOOL)hasUserAssistanceRequired;
-(void)setQualityIndicator:(int)arg1 ;
-(void)setHasQualityIndicator:(BOOL)arg1 ;
-(BOOL)hasQualityIndicator;
-(void)setLocationType:(int)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(int)triggerTypes;
-(BOOL)userAssistanceRequired;
-(int)qualityIndicator;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHorizontalAccuracy:(int)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(int)horizontalAccuracy;
-(int)locationType;
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

