/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDNWActivity;

@interface AWDNWActivityEpilogue : PBCodable <NSCopying> {

	unsigned long long _durationMsecs;
	unsigned long long _fragmentsQuenched;
	unsigned long long _timestamp;
	AWDNWActivity* _activity;
	int _completionReason;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasActivity; 
@property (nonatomic,retain) AWDNWActivity * activity;                          //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMsecs; 
@property (assign,nonatomic) unsigned long long durationMsecs;                  //@synthesize durationMsecs=_durationMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasFragmentsQuenched; 
@property (assign,nonatomic) unsigned long long fragmentsQuenched;              //@synthesize fragmentsQuenched=_fragmentsQuenched - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionReason; 
@property (assign,nonatomic) int completionReason;                              //@synthesize completionReason=_completionReason - In the implementation block
-(BOOL)hasActivity;
-(void)setDurationMsecs:(unsigned long long)arg1 ;
-(void)setHasDurationMsecs:(BOOL)arg1 ;
-(BOOL)hasDurationMsecs;
-(void)setFragmentsQuenched:(unsigned long long)arg1 ;
-(void)setHasFragmentsQuenched:(BOOL)arg1 ;
-(BOOL)hasFragmentsQuenched;
-(int)completionReason;
-(void)setCompletionReason:(int)arg1 ;
-(void)setHasCompletionReason:(BOOL)arg1 ;
-(BOOL)hasCompletionReason;
-(id)completionReasonAsString:(int)arg1 ;
-(int)StringAsCompletionReason:(id)arg1 ;
-(unsigned long long)durationMsecs;
-(unsigned long long)fragmentsQuenched;
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
-(AWDNWActivity *)activity;
-(void)setActivity:(AWDNWActivity *)arg1 ;
@end
