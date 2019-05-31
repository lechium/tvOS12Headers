/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDAddress : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _knownAccuracy;
	NSMutableArray* _localizedAddress;
	NSMutableArray* _spokenNavigationAddress;
	NSMutableArray* _spokenStructuredAddress;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * localizedAddress;                     //@synthesize localizedAddress=_localizedAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNavigationAddress;              //@synthesize spokenNavigationAddress=_spokenNavigationAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenStructuredAddress;              //@synthesize spokenStructuredAddress=_spokenStructuredAddress - In the implementation block
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy;                                     //@synthesize knownAccuracy=_knownAccuracy - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)localizedAddressType;
+(Class)spokenNavigationAddressType;
+(Class)spokenStructuredAddressType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addLocalizedAddress:(id)arg1 ;
-(void)addSpokenNavigationAddress:(id)arg1 ;
-(void)addSpokenStructuredAddress:(id)arg1 ;
-(unsigned long long)localizedAddressCount;
-(void)clearLocalizedAddress;
-(id)localizedAddressAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenNavigationAddressCount;
-(void)clearSpokenNavigationAddress;
-(id)spokenNavigationAddressAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenStructuredAddressCount;
-(void)clearSpokenStructuredAddress;
-(id)spokenStructuredAddressAtIndex:(unsigned long long)arg1 ;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(BOOL)hasKnownAccuracy;
-(id)knownAccuracyAsString:(int)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
-(NSMutableArray *)localizedAddress;
-(void)setLocalizedAddress:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spokenNavigationAddress;
-(void)setSpokenNavigationAddress:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spokenStructuredAddress;
-(void)setSpokenStructuredAddress:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
