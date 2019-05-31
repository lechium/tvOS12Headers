/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying> {

	NSString* _featureString;
	unsigned _parameterSet;
	unsigned _payload;
	NSMutableArray* _videoRuleCollections;

}

@property (assign,nonatomic) unsigned payload;                                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoRuleCollections;              //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) NSString * featureString;                           //@synthesize featureString=_featureString - In the implementation block
@property (assign,nonatomic) unsigned parameterSet;                              //@synthesize parameterSet=_parameterSet - In the implementation block
+(Class)videoRuleCollectionsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)videoRuleCollections;
-(void)setVideoRuleCollections:(NSMutableArray *)arg1 ;
-(void)setFeatureString:(NSString *)arg1 ;
-(void)addVideoRuleCollections:(id)arg1 ;
-(unsigned long long)videoRuleCollectionsCount;
-(void)clearVideoRuleCollections;
-(id)videoRuleCollectionsAtIndex:(unsigned long long)arg1 ;
-(NSString *)featureString;
-(unsigned)parameterSet;
-(void)setParameterSet:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)payload;
-(void)setPayload:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
