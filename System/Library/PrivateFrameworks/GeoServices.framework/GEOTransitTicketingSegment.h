/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {

	NSMutableArray* _paths;
	NSString* _segmentName;
	NSString* _ticketingUrl;

}

@property (nonatomic,readonly) BOOL hasTicketingUrl; 
@property (nonatomic,retain) NSString * ticketingUrl;              //@synthesize ticketingUrl=_ticketingUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasSegmentName; 
@property (nonatomic,retain) NSString * segmentName;               //@synthesize segmentName=_segmentName - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;               //@synthesize paths=_paths - In the implementation block
+(Class)pathType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTicketingUrl;
-(NSString *)ticketingUrl;
-(void)addPath:(id)arg1 ;
-(void)setTicketingUrl:(NSString *)arg1 ;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSegmentName;
-(NSString *)segmentName;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

