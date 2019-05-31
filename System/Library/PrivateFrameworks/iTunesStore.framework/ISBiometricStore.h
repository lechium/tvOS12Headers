/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSLock, NSNumber;

@interface ISBiometricStore : NSObject {

	NSCache* _contextCache;
	NSLock* _lock;

}

@property (assign) long long biometricState; 
@property (getter=isBiometricStateEnabled,readonly) BOOL biometricStateEnabled; 
@property (readonly) NSNumber * lastRegisteredAccountIdentifier; 
+(id)keychainLabelForKeyWithAccountID:(id)arg1 purpose:(long long)arg2 ;
+(id)diskBasedPaymentSheet;
+(void)tokenUpdateDidFinishWithLogKey:(id)arg1 ;
+(BOOL)tokenUpdateShouldStartWithLogKey:(id)arg1 ;
+(long long)tokenUpdateState;
+(id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2 ;
+(id)keychainLabelForCertWithAccountID:(id)arg1 purpose:(long long)arg2 ;
+(BOOL)shouldUseX509;
+(id)sharedInstance;
-(BOOL)canPerformBiometricOptIn;
-(long long)biometricState;
-(void)addContextToCache:(id)arg1 withToken:(id)arg2 ;
-(long long)biometricAvailabilityForAccountIdentifier:(id)arg1 ;
-(BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1 ;
-(void)clearLastRegisteredAccountIdentifier;
-(id)fetchContextFromCacheWithToken:(id)arg1 evict:(BOOL)arg2 ;
-(unsigned long long)identityMapCount;
-(BOOL)isBiometricStateEnabled;
-(BOOL)isIdentityMapValidForAccountIdentifier:(id)arg1 ;
-(unsigned long long)keyCountForAccountIdentifier:(id)arg1 ;
-(NSNumber *)lastRegisteredAccountIdentifier;
-(void)registerAccountIdentifier:(id)arg1 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg1 ;
-(void)setBiometricState:(long long)arg1 ;
-(id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(id)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(BOOL)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(BOOL)arg3 error:(id*)arg4 ;
-(id)init;
@end

