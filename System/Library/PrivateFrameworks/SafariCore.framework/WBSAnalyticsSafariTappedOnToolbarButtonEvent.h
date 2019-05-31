/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariTappedOnToolbarButtonEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _button;
	BOOL _usedLongTap;
	SCD_Struct_WB6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasButton; 
@property (assign,nonatomic) int button;                                //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasUsedLongTap; 
@property (assign,nonatomic) BOOL usedLongTap;                          //@synthesize usedLongTap=_usedLongTap - In the implementation block
-(void)setHasButton:(BOOL)arg1 ;
-(BOOL)hasButton;
-(id)buttonAsString:(int)arg1 ;
-(int)StringAsButton:(id)arg1 ;
-(void)setUsedLongTap:(BOOL)arg1 ;
-(void)setHasUsedLongTap:(BOOL)arg1 ;
-(BOOL)hasUsedLongTap;
-(BOOL)usedLongTap;
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
-(int)button;
-(void)setButton:(int)arg1 ;
-(id)dictionaryRepresentation;
@end

