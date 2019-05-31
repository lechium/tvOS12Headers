/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, VSSubscriptionSource, NSData;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	long long _accessLevel;
	NSArray* _tierIdentifiers;
	NSString* _billingIdentifier;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _derivedSubscriptionInfo;
	NSString* _providedSubscriptionInfo;
	VSSubscriptionSource* _source;
	NSString* _subscriberIdentifierHash;

}

@property (nonatomic,copy) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                        //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy) NSString * subscriptionInfo; 
@property (nonatomic,copy) NSString * derivedSubscriptionInfo;               //@synthesize derivedSubscriptionInfo=_derivedSubscriptionInfo - In the implementation block
@property (nonatomic,copy) NSString * providedSubscriptionInfo;              //@synthesize providedSubscriptionInfo=_providedSubscriptionInfo - In the implementation block
@property (nonatomic,copy) VSSubscriptionSource * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSData * versionHash; 
@property (nonatomic,copy) NSString * subscriberIdentifierHash;              //@synthesize subscriberIdentifierHash=_subscriberIdentifierHash - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long accessLevel;                          //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,copy) NSArray * tierIdentifiers;                        //@synthesize tierIdentifiers=_tierIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * billingIdentifier;                     //@synthesize billingIdentifier=_billingIdentifier - In the implementation block
+(id)keyPathsForValuesAffectingSubscriptionInfo;
+(id)keyPathsForValuesAffectingVersionHash;
+(BOOL)supportsSecureCoding;
-(void)setNilValueForKey:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(long long)accessLevel;
-(void)setSubscriptionInfo:(NSString *)arg1 ;
-(NSString *)subscriptionInfo;
-(NSData *)versionHash;
-(NSString *)providedSubscriptionInfo;
-(void)setSubscriberIdentifierHash:(NSString *)arg1 ;
-(void)setProvidedSubscriptionInfo:(NSString *)arg1 ;
-(NSString *)derivedSubscriptionInfo;
-(void)_updateHash:(id)arg1 withValueForProperty:(id)arg2 ;
-(NSString *)subscriberIdentifierHash;
-(void)setDerivedSubscriptionInfo:(NSString *)arg1 ;
-(void)setAccessLevel:(long long)arg1 ;
-(NSArray *)tierIdentifiers;
-(void)setTierIdentifiers:(NSArray *)arg1 ;
-(NSString *)billingIdentifier;
-(void)setBillingIdentifier:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(VSSubscriptionSource *)arg1 ;
-(VSSubscriptionSource *)source;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
@end

