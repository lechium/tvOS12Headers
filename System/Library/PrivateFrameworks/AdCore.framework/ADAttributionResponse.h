/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying> {

	NSMutableArray* _versionedAttributionDetails;

}

@property (nonatomic,retain) NSMutableArray * versionedAttributionDetails;              //@synthesize versionedAttributionDetails=_versionedAttributionDetails - In the implementation block
+(Class)versionedAttributionDetailsType;
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addVersionedAttributionDetails:(id)arg1 ;
-(unsigned long long)versionedAttributionDetailsCount;
-(void)clearVersionedAttributionDetails;
-(id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)versionedAttributionDetails;
-(void)setVersionedAttributionDetails:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

