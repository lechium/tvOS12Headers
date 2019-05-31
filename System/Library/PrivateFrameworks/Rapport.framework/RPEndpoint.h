/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFDevice, CUBonjourDevice, NSString;

@interface RPEndpoint : NSObject <NSSecureCoding> {

	SFDevice* _bleDevice;
	CUBonjourDevice* _bonjourDevice;
	NSString* _identifier;
	NSString* _idsDeviceIdentifier;
	NSString* _mediaRemoteIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _model;
	NSString* _name;
	unsigned long long _statusFlags;
	NSString* _sourceVersion;
	BOOL _present;
	int _proximity;

}

@property (nonatomic,retain) SFDevice * bleDevice;                         //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;              //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceIdentifier;                 //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteIdentifier;               //@synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteIdentifier;                //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,copy) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL present;                                 //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;               //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                       //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,readonly) int proximity;                              //@synthesize proximity=_proximity - In the implementation block
+(id)nullEndpoint;
+(BOOL)supportsSecureCoding;
-(void)setSourceVersion:(NSString *)arg1 ;
-(NSString *)sourceVersion;
-(void)setModel:(NSString *)arg1 ;
-(void)setIdsDeviceIdentifier:(NSString *)arg1 ;
-(unsigned long long)statusFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(CUBonjourDevice *)bonjourDevice;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(int)proximity;
-(void)setPresent:(BOOL)arg1 ;
-(SFDevice *)bleDevice;
-(void)setBleDevice:(SFDevice *)arg1 ;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(BOOL)removeBonjourDevice:(id)arg1 ;
-(unsigned)updateWithSFDevice:(id)arg1 ;
-(BOOL)removeSFDevice:(id)arg1 ;
-(void)setMediaRemoteIdentifier:(NSString *)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(void)setMediaRouteIdentifier:(NSString *)arg1 ;
-(NSString *)idsDeviceIdentifier;
-(NSString *)mediaRemoteIdentifier;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)present;
-(NSString *)model;
@end

