/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPairedSyncSyncReport : PBCodable <NSCopying> {

	unsigned long long _syncDuration;
	unsigned long long _timestamp;
	NSString* _activityName;
	unsigned _defaultByteCount;
	NSString* _gizmoBuild;
	NSString* _gizmoHardware;
	unsigned _recordCount;
	unsigned _syncByteCount;
	unsigned _syncErrorCode;
	unsigned _syncType;
	unsigned _timeoutCount;
	unsigned _urgentByteCount;
	BOOL _isAutomated;
	BOOL _sawADropout;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomated; 
@property (assign,nonatomic) BOOL isAutomated;                             //@synthesize isAutomated=_isAutomated - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoBuild; 
@property (nonatomic,retain) NSString * gizmoBuild;                        //@synthesize gizmoBuild=_gizmoBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoHardware; 
@property (nonatomic,retain) NSString * gizmoHardware;                     //@synthesize gizmoHardware=_gizmoHardware - In the implementation block
@property (assign,nonatomic) BOOL hasSyncDuration; 
@property (assign,nonatomic) unsigned long long syncDuration;              //@synthesize syncDuration=_syncDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityName; 
@property (nonatomic,retain) NSString * activityName;                      //@synthesize activityName=_activityName - In the implementation block
@property (assign,nonatomic) BOOL hasSyncErrorCode; 
@property (assign,nonatomic) unsigned syncErrorCode;                       //@synthesize syncErrorCode=_syncErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutCount; 
@property (assign,nonatomic) unsigned timeoutCount;                        //@synthesize timeoutCount=_timeoutCount - In the implementation block
@property (assign,nonatomic) BOOL hasSyncType; 
@property (assign,nonatomic) unsigned syncType;                            //@synthesize syncType=_syncType - In the implementation block
@property (assign,nonatomic) BOOL hasRecordCount; 
@property (assign,nonatomic) unsigned recordCount;                         //@synthesize recordCount=_recordCount - In the implementation block
@property (assign,nonatomic) BOOL hasSyncByteCount; 
@property (assign,nonatomic) unsigned syncByteCount;                       //@synthesize syncByteCount=_syncByteCount - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultByteCount; 
@property (assign,nonatomic) unsigned defaultByteCount;                    //@synthesize defaultByteCount=_defaultByteCount - In the implementation block
@property (assign,nonatomic) BOOL hasUrgentByteCount; 
@property (assign,nonatomic) unsigned urgentByteCount;                     //@synthesize urgentByteCount=_urgentByteCount - In the implementation block
@property (assign,nonatomic) BOOL hasSawADropout; 
@property (assign,nonatomic) BOOL sawADropout;                             //@synthesize sawADropout=_sawADropout - In the implementation block
-(void)setSyncDuration:(unsigned long long)arg1 ;
-(void)setHasSyncDuration:(BOOL)arg1 ;
-(BOOL)hasSyncDuration;
-(unsigned long long)syncDuration;
-(void)setSyncType:(unsigned)arg1 ;
-(BOOL)hasSyncType;
-(unsigned)syncType;
-(void)setGizmoBuild:(NSString *)arg1 ;
-(void)setGizmoHardware:(NSString *)arg1 ;
-(void)setActivityName:(NSString *)arg1 ;
-(void)setIsAutomated:(BOOL)arg1 ;
-(void)setHasIsAutomated:(BOOL)arg1 ;
-(BOOL)hasIsAutomated;
-(BOOL)hasGizmoBuild;
-(BOOL)hasGizmoHardware;
-(BOOL)hasActivityName;
-(void)setSyncErrorCode:(unsigned)arg1 ;
-(void)setHasSyncErrorCode:(BOOL)arg1 ;
-(BOOL)hasSyncErrorCode;
-(void)setTimeoutCount:(unsigned)arg1 ;
-(void)setHasTimeoutCount:(BOOL)arg1 ;
-(BOOL)hasTimeoutCount;
-(void)setHasSyncType:(BOOL)arg1 ;
-(void)setRecordCount:(unsigned)arg1 ;
-(void)setHasRecordCount:(BOOL)arg1 ;
-(BOOL)hasRecordCount;
-(void)setSyncByteCount:(unsigned)arg1 ;
-(void)setHasSyncByteCount:(BOOL)arg1 ;
-(BOOL)hasSyncByteCount;
-(void)setDefaultByteCount:(unsigned)arg1 ;
-(void)setHasDefaultByteCount:(BOOL)arg1 ;
-(BOOL)hasDefaultByteCount;
-(void)setUrgentByteCount:(unsigned)arg1 ;
-(void)setHasUrgentByteCount:(BOOL)arg1 ;
-(BOOL)hasUrgentByteCount;
-(void)setSawADropout:(BOOL)arg1 ;
-(void)setHasSawADropout:(BOOL)arg1 ;
-(BOOL)hasSawADropout;
-(BOOL)isAutomated;
-(NSString *)gizmoBuild;
-(NSString *)gizmoHardware;
-(NSString *)activityName;
-(unsigned)syncErrorCode;
-(unsigned)timeoutCount;
-(unsigned)recordCount;
-(unsigned)syncByteCount;
-(unsigned)defaultByteCount;
-(unsigned)urgentByteCount;
-(BOOL)sawADropout;
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

