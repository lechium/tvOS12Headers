/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTime;

@interface VCPProtoTimeRange : PBCodable <NSCopying> {

	VCPProtoTime* _duration;
	VCPProtoTime* _start;

}

@property (nonatomic,retain) VCPProtoTime * start;                 //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) VCPProtoTime * duration;              //@synthesize duration=_duration - In the implementation block
+(id)timeRangeWithCMTimeRange:(SCD_Struct_VC9)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(SCD_Struct_VC9)timeRangeValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(VCPProtoTime *)arg1 ;
-(VCPProtoTime *)duration;
-(VCPProtoTime *)start;
-(void)setStart:(VCPProtoTime *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

