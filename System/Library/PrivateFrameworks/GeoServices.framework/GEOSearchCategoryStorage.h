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

@class PBUnknownFields, GEOPDAutocompleteEntry, GEOPDBrowseCategory;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOPDBrowseCategory* _browseCategory;

}

@property (nonatomic,readonly) BOOL hasBrowseCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * browseCategory;                    //@synthesize browseCategory=_browseCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasAutocompleteEntry;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(id)initWithSearchCategory:(id)arg1 ;
-(void)setBrowseCategory:(GEOPDBrowseCategory *)arg1 ;
-(BOOL)hasBrowseCategory;
-(GEOPDBrowseCategory *)browseCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
