/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOStyleAttributes, NSMutableArray, NSData;

@interface GEOPDBrowseCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _displayMode;
	NSString* _displayString;
	NSString* _popularDisplayToken;
	NSString* _shortDisplayString;
	int _sortOrder;
	GEOStyleAttributes* _styleAttributes;
	int _subCategoryType;
	NSMutableArray* _subCategorys;
	NSData* _suggestionEntryMetadata;
	BOOL _isSubCategorySameAsTopLevel;
	SCD_Struct_GE70 _has;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                  //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * subCategorys;                     //@synthesize subCategorys=_subCategorys - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDisplayString; 
@property (nonatomic,retain) NSString * shortDisplayString;                     //@synthesize shortDisplayString=_shortDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasPopularDisplayToken; 
@property (nonatomic,retain) NSString * popularDisplayToken;                    //@synthesize popularDisplayToken=_popularDisplayToken - In the implementation block
@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                     //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayMode; 
@property (assign,nonatomic) int displayMode;                                   //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) BOOL hasSubCategoryType; 
@property (assign,nonatomic) int subCategoryType;                               //@synthesize subCategoryType=_subCategoryType - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubCategorySameAsTopLevel; 
@property (assign,nonatomic) BOOL isSubCategorySameAsTopLevel;                  //@synthesize isSubCategorySameAsTopLevel=_isSubCategorySameAsTopLevel - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)subCategoryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasStyleAttributes;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(unsigned long long)subCategorysCount;
-(NSMutableArray *)subCategorys;
-(BOOL)hasShortDisplayString;
-(NSString *)shortDisplayString;
-(BOOL)hasPopularDisplayToken;
-(NSString *)popularDisplayToken;
-(int)subCategoryType;
-(BOOL)isSubCategorySameAsTopLevel;
-(void)addSubCategory:(id)arg1 ;
-(void)clearSubCategorys;
-(id)subCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setShortDisplayString:(NSString *)arg1 ;
-(void)setPopularDisplayToken:(NSString *)arg1 ;
-(BOOL)hasDisplayString;
-(void)setDisplayMode:(int)arg1 ;
-(void)setHasDisplayMode:(BOOL)arg1 ;
-(BOOL)hasDisplayMode;
-(id)displayModeAsString:(int)arg1 ;
-(int)StringAsDisplayMode:(id)arg1 ;
-(void)setSubCategoryType:(int)arg1 ;
-(void)setHasSubCategoryType:(BOOL)arg1 ;
-(BOOL)hasSubCategoryType;
-(id)subCategoryTypeAsString:(int)arg1 ;
-(int)StringAsSubCategoryType:(id)arg1 ;
-(void)setIsSubCategorySameAsTopLevel:(BOOL)arg1 ;
-(void)setHasIsSubCategorySameAsTopLevel:(BOOL)arg1 ;
-(BOOL)hasIsSubCategorySameAsTopLevel;
-(void)setSubCategorys:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)displayMode;
-(void)copyTo:(id)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
@end

