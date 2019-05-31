/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMultiTabsState : PBCodable <NSCopying> {

	unsigned _currentTabIndex;
	unsigned _numberOfTabsOpen;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasNumberOfTabsOpen; 
@property (assign,nonatomic) unsigned numberOfTabsOpen;              //@synthesize numberOfTabsOpen=_numberOfTabsOpen - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentTabIndex; 
@property (assign,nonatomic) unsigned currentTabIndex;               //@synthesize currentTabIndex=_currentTabIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setNumberOfTabsOpen:(unsigned)arg1 ;
-(void)setHasNumberOfTabsOpen:(BOOL)arg1 ;
-(BOOL)hasNumberOfTabsOpen;
-(void)setCurrentTabIndex:(unsigned)arg1 ;
-(void)setHasCurrentTabIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentTabIndex;
-(unsigned)numberOfTabsOpen;
-(unsigned)currentTabIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
