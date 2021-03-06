/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSLocale, NSArray, SKProductSubscriptionPeriod, SKProductDiscount;

@interface SKProduct : NSObject {

	id _internal;

}

@property (setter=_setLocaleIdentifier:,getter=_localeIdentifier,nonatomic,copy) NSString * _localeIdentifier; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * productIdentifier; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (nonatomic,readonly) NSArray * contentLengths; 
@property (nonatomic,readonly) NSArray * downloadContentLengths; 
@property (nonatomic,readonly) NSString * contentVersion; 
@property (nonatomic,readonly) NSString * downloadContentVersion; 
@property (nonatomic,readonly) SKProductSubscriptionPeriod * subscriptionPeriod; 
@property (nonatomic,readonly) SKProductDiscount * introductoryPrice; 
@property (nonatomic,readonly) NSString * subscriptionGroupIdentifier; 
+(id)productsFromXPCEncodingsArray:(id)arg1 ;
+(id)productsFromDictionaries:(id)arg1 ;
-(NSString *)contentVersion;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDecimalNumber *)price;
-(NSString *)productIdentifier;
-(BOOL)isDownloadable;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(void)_setPrice:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(id)initMinusLocaleWithDictionary:(id)arg1 ;
-(SKProductDiscount *)introductoryPrice;
-(NSArray *)downloadContentLengths;
-(NSString *)downloadContentVersion;
-(void)_setLocaleIdentifier:(id)arg1 ;
-(id)initMinusLocaleWithXPCEncoding:(id)arg1 ;
-(NSArray *)contentLengths;
-(BOOL)downloadable;
-(NSString *)subscriptionGroupIdentifier;
-(void)_setContentVersion:(id)arg1 ;
-(void)_setDownloadContentLengths:(id)arg1 ;
-(void)_setDownloadable:(BOOL)arg1 ;
-(void)_setIntroductoryPrice:(id)arg1 ;
-(void)_setLocalizedDescription:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(void)_setProductIdentifier:(id)arg1 ;
-(void)_setSubscriptionGroupIdentifier:(id)arg1 ;
-(NSString *)_localeIdentifier;
-(NSLocale *)priceLocale;
-(id)init;
-(NSString *)localizedTitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)localizedDescription;
-(void)_setLocale:(id)arg1 ;
@end

