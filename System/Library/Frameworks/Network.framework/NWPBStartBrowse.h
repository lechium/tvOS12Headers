/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

@interface NWPBStartBrowse : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NWPBBrowseDescriptor* _descriptor;
	NWPBParameters* _parameters;

}

@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) NWPBBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                          //@synthesize clientUUID=_clientUUID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasParameters;
-(BOOL)hasDescriptor;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDescriptor:(NWPBBrowseDescriptor *)arg1 ;
-(NWPBBrowseDescriptor *)descriptor;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NWPBParameters *)parameters;
-(void)setParameters:(NWPBParameters *)arg1 ;
@end

