/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FBApplicationProvisioningProfile : NSObject {

	NSString* _allowedApplicationIdentifierEntitlement;
	BOOL _appleInternalProfile;
	BOOL _beta;
	BOOL _freeDeveloperProfile;
	BOOL _provisionsAllDevices;
	BOOL _provisionsThisDevice;
	NSString* _signerIdentity;
	NSDate* _expirationDate;
	NSString* _UUID;

}

@property (nonatomic,copy,readonly) NSString * signerIdentity;                                       //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isAppleInternalProfile,nonatomic,readonly) BOOL appleInternalProfile;              //@synthesize appleInternalProfile=_appleInternalProfile - In the implementation block
@property (getter=isBeta,nonatomic,readonly) BOOL beta;                                              //@synthesize beta=_beta - In the implementation block
@property (getter=isFreeDeveloperProfile,nonatomic,readonly) BOOL freeDeveloperProfile;              //@synthesize freeDeveloperProfile=_freeDeveloperProfile - In the implementation block
@property (nonatomic,readonly) BOOL provisionsAllDevices;                                            //@synthesize provisionsAllDevices=_provisionsAllDevices - In the implementation block
@property (nonatomic,readonly) BOOL provisionsThisDevice;                                            //@synthesize provisionsThisDevice=_provisionsThisDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                                 //@synthesize UUID=_UUID - In the implementation block
-(NSDate *)expirationDate;
-(BOOL)isBeta;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)signerIdentity;
-(id)initWithSignerIdentity:(id)arg1 profile:(id)arg2 ;
-(BOOL)isAppleInternalProfile;
-(BOOL)allowsApplicationIdentifierEntitlement:(id)arg1 ;
-(BOOL)isFreeDeveloperProfile;
-(BOOL)provisionsAllDevices;
-(BOOL)provisionsThisDevice;
-(NSString *)UUID;
-(id)description;
@end

