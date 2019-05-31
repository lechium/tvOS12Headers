/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEORPPhotoWithMetadata, NSData;

@interface GEORPInstructionCorrection : PBCodable <NSCopying> {

	NSString* _comments;
	GEORPPhotoWithMetadata* _photo;
	unsigned _routeStepIndex;
	NSData* _routeStepScreenshotImageData;
	unsigned _routeStepSubstepIndex;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasRouteStepIndex; 
@property (assign,nonatomic) unsigned routeStepIndex;                             //@synthesize routeStepIndex=_routeStepIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments;                                 //@synthesize comments=_comments - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEORPPhotoWithMetadata * photo;                      //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) BOOL hasRouteStepSubstepIndex; 
@property (assign,nonatomic) unsigned routeStepSubstepIndex;                      //@synthesize routeStepSubstepIndex=_routeStepSubstepIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteStepScreenshotImageData; 
@property (nonatomic,retain) NSData * routeStepScreenshotImageData;               //@synthesize routeStepScreenshotImageData=_routeStepScreenshotImageData - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(NSString *)comments;
-(BOOL)hasPhoto;
-(GEORPPhotoWithMetadata *)photo;
-(void)setPhoto:(GEORPPhotoWithMetadata *)arg1 ;
-(void)setRouteStepScreenshotImageData:(NSData *)arg1 ;
-(void)setRouteStepIndex:(unsigned)arg1 ;
-(void)setHasRouteStepIndex:(BOOL)arg1 ;
-(BOOL)hasRouteStepIndex;
-(void)setRouteStepSubstepIndex:(unsigned)arg1 ;
-(void)setHasRouteStepSubstepIndex:(BOOL)arg1 ;
-(BOOL)hasRouteStepSubstepIndex;
-(BOOL)hasRouteStepScreenshotImageData;
-(unsigned)routeStepIndex;
-(unsigned)routeStepSubstepIndex;
-(NSData *)routeStepScreenshotImageData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

