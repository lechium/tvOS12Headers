/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
@class VSIdentityProvider, NSString, VSAppDescription, NSArray, NSDictionary;

@interface VSSetupFlowConfiguration : NSObject {

	BOOL _shouldSkipSetupEntirely;
	BOOL _shouldOfferAuthenticationFlow;
	BOOL _shouldOfferSoleAuthenticationFlow;
	BOOL _shouldOfferSTBAuthenticationFlow;
	BOOL _canShowSupportedAppsButton;
	VSIdentityProvider* _identityProvider;
	NSString* _providerAccountUsername;
	VSAppDescription* _msoAppDescription;
	NSArray* _bundlesIDsToConsent;
	NSDictionary* _vouchersByBundleID;

}

@property (assign,nonatomic) BOOL shouldSkipSetupEntirely;                        //@synthesize shouldSkipSetupEntirely=_shouldSkipSetupEntirely - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferAuthenticationFlow;                  //@synthesize shouldOfferAuthenticationFlow=_shouldOfferAuthenticationFlow - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSoleAuthenticationFlow;              //@synthesize shouldOfferSoleAuthenticationFlow=_shouldOfferSoleAuthenticationFlow - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSTBAuthenticationFlow;               //@synthesize shouldOfferSTBAuthenticationFlow=_shouldOfferSTBAuthenticationFlow - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;               //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSString * providerAccountUsername;                    //@synthesize providerAccountUsername=_providerAccountUsername - In the implementation block
@property (nonatomic,retain) VSAppDescription * msoAppDescription;                //@synthesize msoAppDescription=_msoAppDescription - In the implementation block
@property (nonatomic,copy) NSArray * bundlesIDsToConsent;                         //@synthesize bundlesIDsToConsent=_bundlesIDsToConsent - In the implementation block
@property (nonatomic,copy) NSDictionary * vouchersByBundleID;                     //@synthesize vouchersByBundleID=_vouchersByBundleID - In the implementation block
@property (assign,nonatomic) BOOL canShowSupportedAppsButton;                     //@synthesize canShowSupportedAppsButton=_canShowSupportedAppsButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(BOOL)shouldSkipSetupEntirely;
-(BOOL)shouldOfferSTBAuthenticationFlow;
-(VSAppDescription *)msoAppDescription;
-(NSString *)providerAccountUsername;
-(NSArray *)bundlesIDsToConsent;
-(void)setProviderAccountUsername:(NSString *)arg1 ;
-(BOOL)shouldOfferSoleAuthenticationFlow;
-(BOOL)canShowSupportedAppsButton;
-(BOOL)shouldOfferAuthenticationFlow;
-(NSDictionary *)vouchersByBundleID;
-(void)setShouldSkipSetupEntirely:(BOOL)arg1 ;
-(void)setMsoAppDescription:(VSAppDescription *)arg1 ;
-(void)setShouldOfferSTBAuthenticationFlow:(BOOL)arg1 ;
-(void)setShouldOfferSoleAuthenticationFlow:(BOOL)arg1 ;
-(void)setVouchersByBundleID:(NSDictionary *)arg1 ;
-(void)setBundlesIDsToConsent:(NSArray *)arg1 ;
-(void)setShouldOfferAuthenticationFlow:(BOOL)arg1 ;
-(void)setCanShowSupportedAppsButton:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

