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

@class GEORPCarPlayAuxiliaryControl, GEORPWatchAuxiliaryControl;

@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {

	GEORPCarPlayAuxiliaryControl* _car;
	GEORPWatchAuxiliaryControl* _watch;

}

@property (nonatomic,readonly) BOOL hasWatch; 
@property (nonatomic,retain) GEORPWatchAuxiliaryControl * watch;              //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) BOOL hasCar; 
@property (nonatomic,retain) GEORPCarPlayAuxiliaryControl * car;              //@synthesize car=_car - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setWatch:(GEORPWatchAuxiliaryControl *)arg1 ;
-(void)setCar:(GEORPCarPlayAuxiliaryControl *)arg1 ;
-(BOOL)hasWatch;
-(BOOL)hasCar;
-(GEORPWatchAuxiliaryControl *)watch;
-(GEORPCarPlayAuxiliaryControl *)car;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

