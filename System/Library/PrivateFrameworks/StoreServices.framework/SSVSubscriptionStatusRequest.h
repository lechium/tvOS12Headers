/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSString;

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding> {

	BOOL _authenticatesIfNecessary;
	SSAuthenticationContext* _authenticationContext;
	long long _carrierBundleProvisioningStyle;
	NSString* _localizedAuthenticationReason;
	NSString* _reason;

}

@property (assign,nonatomic) BOOL authenticatesIfNecessary;                              //@synthesize authenticatesIfNecessary=_authenticatesIfNecessary - In the implementation block
@property (nonatomic,copy) NSString * localizedAuthenticationReason;                     //@synthesize localizedAuthenticationReason=_localizedAuthenticationReason - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,nonatomic) long long carrierBundleProvisioningStyle;                   //@synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle - In the implementation block
@property (nonatomic,copy) NSString * reason;                                            //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowMultipleCallbacks;
+(long long)requestMessage;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAuthenticatesIfNecessary:(BOOL)arg1 ;
-(void)setCarrierBundleProvisioningStyle:(long long)arg1 ;
-(void)setLocalizedAuthenticationReason:(NSString *)arg1 ;
-(void)startWithStatusResponseBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(BOOL)authenticatesIfNecessary;
-(long long)carrierBundleProvisioningStyle;
-(NSString *)localizedAuthenticationReason;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
@end

