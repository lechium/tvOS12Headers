/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDBrowseCategories : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _browseCategorys;

}

@property (nonatomic,retain) NSMutableArray * browseCategorys;               //@synthesize browseCategorys=_browseCategorys - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)browseCategoryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)browseCategorysCount;
-(NSMutableArray *)browseCategorys;
-(void)addBrowseCategory:(id)arg1 ;
-(void)clearBrowseCategorys;
-(id)browseCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setBrowseCategorys:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

