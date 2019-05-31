/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR1* _timeIntervals;
	float _thumbnailsHeight;
	float _thumbnailsWidth;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) unsigned long long timeIntervalsCount; 
@property (nonatomic,readonly) double* timeIntervals; 
@property (assign,nonatomic) BOOL hasThumbnailsWidth; 
@property (assign,nonatomic) float thumbnailsWidth;                                //@synthesize thumbnailsWidth=_thumbnailsWidth - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailsHeight; 
@property (assign,nonatomic) float thumbnailsHeight;                               //@synthesize thumbnailsHeight=_thumbnailsHeight - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)timeIntervalsCount;
-(void)clearTimeIntervals;
-(double)timeIntervalsAtIndex:(unsigned long long)arg1 ;
-(void)addTimeIntervals:(double)arg1 ;
-(double*)timeIntervals;
-(void)setTimeIntervals:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)setThumbnailsWidth:(float)arg1 ;
-(void)setHasThumbnailsWidth:(BOOL)arg1 ;
-(BOOL)hasThumbnailsWidth;
-(void)setThumbnailsHeight:(float)arg1 ;
-(void)setHasThumbnailsHeight:(BOOL)arg1 ;
-(BOOL)hasThumbnailsHeight;
-(float)thumbnailsWidth;
-(float)thumbnailsHeight;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

