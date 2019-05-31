/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class CNContact, PKPaymentOptionsSynchronization;

@interface PKPaymentOptionsRecents : NSObject {

	CNContact* _cachedMeContact;
	id<NSObject> _meContactDidChangeNotificationObserver;
	PKPaymentOptionsSynchronization* _optionsSynchronization;
	BOOL _meCardCachingEnabled;

}

@property (nonatomic,readonly) CNContact * meCard; 
@property (assign,getter=isMeCardCachingEnabled,nonatomic) BOOL meCardCachingEnabled;              //@synthesize meCardCachingEnabled=_meCardCachingEnabled - In the implementation block
+(id)defaultInstance;
-(CNContact *)meCard;
-(id)recentsForPreference:(id)arg1 ;
-(id)meCardEntriesForPreference:(id)arg1 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(id)_keychainDataForKey:(id)arg1 ;
-(BOOL)isMeCardCachingEnabled;
-(id)postalAddressMetadataForContact:(id)arg1 ;
-(void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelsToPropertiesDictionaryForContact:(id)arg1 ;
-(id)contactMetadataForContact:(id)arg1 preference:(id)arg2 ;
-(void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMeCardCachingEnabled:(BOOL)arg1 ;
-(id)_keychainKeyFromContactKey:(id)arg1 ;
-(void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

