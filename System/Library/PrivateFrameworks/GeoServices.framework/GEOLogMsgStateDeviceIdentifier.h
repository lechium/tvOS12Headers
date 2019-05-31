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

@class NSString;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {

	NSString* _deviceHwIdentifier;
	NSString* _deviceOsVersion;
	BOOL _deviceDarkMode;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	SCD_Struct_GE23 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion;                 //@synthesize deviceOsVersion=_deviceOsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHwIdentifier; 
@property (nonatomic,retain) NSString * deviceHwIdentifier;              //@synthesize deviceHwIdentifier=_deviceHwIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool;                        //@synthesize isInternalTool=_isInternalTool - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall;                     //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDarkMode; 
@property (assign,nonatomic) BOOL deviceDarkMode;                        //@synthesize deviceDarkMode=_deviceDarkMode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(void)setDeviceHwIdentifier:(NSString *)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasDeviceDarkMode;
-(BOOL)deviceDarkMode;
-(void)setDeviceDarkMode:(BOOL)arg1 ;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)hasIsInternalInstall;
-(BOOL)isInternalTool;
-(void)setHasDeviceDarkMode:(BOOL)arg1 ;
-(BOOL)hasDeviceOsVersion;
-(BOOL)hasDeviceHwIdentifier;
-(NSString *)deviceOsVersion;
-(NSString *)deviceHwIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isInternalInstall;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

