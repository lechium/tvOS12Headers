/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface WLKUserEnvironment : NSObject {

	BOOL _consented;
	NSString* _DSID;
	NSString* _storeFrontIdentifier;
	NSString* _localeIdentifier;
	NSDictionary* _entitlements;
	NSString* _restrictions;
	NSArray* _consentedBrands;
	NSDictionary* _location;
	unsigned long long _protocolVersion;

}

@property (assign,nonatomic) unsigned long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,retain) NSString * DSID;                                 //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSString * storeFrontIdentifier;                 //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                     //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                     //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSString * restrictions;                         //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) NSArray * consentedBrands;                       //@synthesize consentedBrands=_consentedBrands - In the implementation block
@property (assign,nonatomic) BOOL consented;                                  //@synthesize consented=_consented - In the implementation block
@property (nonatomic,readonly) NSDictionary * location;                       //@synthesize location=_location - In the implementation block
+(id)currentEnvironment;
+(void)setCurrentEnvironmentForTesting:(id)arg1 ;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)protocolVersion;
-(void)setRestrictions:(NSString *)arg1 ;
-(NSString *)restrictions;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)entitlements;
-(NSString *)storeFrontIdentifier;
-(NSString *)DSID;
-(BOOL)isEqualToEnvironment:(id)arg1 ;
-(BOOL)consented;
-(unsigned long long)_hashForStoreStuff;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(void)setConsentedBrands:(NSArray *)arg1 ;
-(void)setConsented:(BOOL)arg1 ;
-(NSArray *)consentedBrands;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)location;
-(NSString *)localeIdentifier;
@end

