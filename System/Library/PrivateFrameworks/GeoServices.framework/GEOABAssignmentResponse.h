/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOABClientConfig, GEOABSecondPartyPlaceRequestClientMetaData, NSString;

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _branchExpirationTtlHours;
	unsigned long long _refreshIntervalSeconds;
	double _timestamp;
	NSMutableArray* _assignments;
	GEOABClientConfig* _clientConfig;
	GEOABSecondPartyPlaceRequestClientMetaData* _mapsAbClientMetadata;
	GEOABSecondPartyPlaceRequestClientMetaData* _parsecClientMetadata;
	GEOABSecondPartyPlaceRequestClientMetaData* _rapClientMetadata;
	NSString* _requestGuid;
	GEOABSecondPartyPlaceRequestClientMetaData* _siriClientMetadata;
	NSString* _sourceURL;
	BOOL _invalidatePoiCache;
	BOOL _invalidateTileCache;
	SCD_Struct_GE87 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) BOOL hasRequestGuid; 
@property (nonatomic,retain) NSString * requestGuid;                                                         //@synthesize requestGuid=_requestGuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * assignments;                                                   //@synthesize assignments=_assignments - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidateTileCache; 
@property (assign,nonatomic) BOOL invalidateTileCache;                                                       //@synthesize invalidateTileCache=_invalidateTileCache - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatePoiCache; 
@property (assign,nonatomic) BOOL invalidatePoiCache;                                                        //@synthesize invalidatePoiCache=_invalidatePoiCache - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshIntervalSeconds; 
@property (assign,nonatomic) unsigned long long refreshIntervalSeconds;                                      //@synthesize refreshIntervalSeconds=_refreshIntervalSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasClientConfig; 
@property (nonatomic,retain) GEOABClientConfig * clientConfig;                                               //@synthesize clientConfig=_clientConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasParsecClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * parsecClientMetadata;              //@synthesize parsecClientMetadata=_parsecClientMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSiriClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * siriClientMetadata;                //@synthesize siriClientMetadata=_siriClientMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasRapClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * rapClientMetadata;                 //@synthesize rapClientMetadata=_rapClientMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * mapsAbClientMetadata;              //@synthesize mapsAbClientMetadata=_mapsAbClientMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasBranchExpirationTtlHours; 
@property (assign,nonatomic) unsigned long long branchExpirationTtlHours;                                    //@synthesize branchExpirationTtlHours=_branchExpirationTtlHours - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)assignmentType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(GEOABClientConfig *)clientConfig;
-(GEOABSecondPartyPlaceRequestClientMetaData *)mapsAbClientMetadata;
-(BOOL)invalidateTileCache;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(NSString *)sourceURL;
-(NSMutableArray *)assignments;
-(GEOABSecondPartyPlaceRequestClientMetaData *)parsecClientMetadata;
-(GEOABSecondPartyPlaceRequestClientMetaData *)siriClientMetadata;
-(GEOABSecondPartyPlaceRequestClientMetaData *)rapClientMetadata;
-(id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(id)_clientConfigValueForKey:(id)arg1 ;
-(unsigned long long)refreshIntervalSeconds;
-(BOOL)invalidatePoiCache;
-(BOOL)hasBranchExpirationTtlHours;
-(unsigned long long)branchExpirationTtlHours;
-(void)addAssignment:(id)arg1 ;
-(void)setRequestGuid:(NSString *)arg1 ;
-(unsigned long long)assignmentsCount;
-(void)clearAssignments;
-(id)assignmentAtIndex:(unsigned long long)arg1 ;
-(void)setClientConfig:(GEOABClientConfig *)arg1 ;
-(void)setParsecClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setSiriClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setRapClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setMapsAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasRequestGuid;
-(void)setInvalidateTileCache:(BOOL)arg1 ;
-(void)setHasInvalidateTileCache:(BOOL)arg1 ;
-(BOOL)hasInvalidateTileCache;
-(void)setInvalidatePoiCache:(BOOL)arg1 ;
-(void)setHasInvalidatePoiCache:(BOOL)arg1 ;
-(BOOL)hasInvalidatePoiCache;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(void)setHasRefreshIntervalSeconds:(BOOL)arg1 ;
-(BOOL)hasRefreshIntervalSeconds;
-(BOOL)hasClientConfig;
-(BOOL)hasParsecClientMetadata;
-(BOOL)hasSiriClientMetadata;
-(BOOL)hasRapClientMetadata;
-(BOOL)hasMapsAbClientMetadata;
-(void)setBranchExpirationTtlHours:(unsigned long long)arg1 ;
-(void)setHasBranchExpirationTtlHours:(BOOL)arg1 ;
-(NSString *)requestGuid;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

