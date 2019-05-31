/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSArray;

@interface VSPersistentSubscription : NSManagedObject

@property (nonatomic,copy) NSString * derivedSubscriptionInfo; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * mostRecentSaveDate; 
@property (nonatomic,copy) NSNumber * sourceKind; 
@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * accessLevel; 
@property (nonatomic,copy) NSArray * tierIdentifiers; 
@property (nonatomic,copy) NSString * subscriberIdentifierHash; 
@property (nonatomic,copy) NSString * billingIdentifier; 
@property (nonatomic,copy) NSString * providedSubscriptionInfo; 
+(id)keyPathsForValuesAffectingDerivedSubscriptionInfo;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(void)_setNullResettableValue:(id)arg1 forKey:(id)arg2 ;
-(void)_deriveValuesFromProvidedInfo:(id)arg1 ;
-(void)setSubscriberIdentifierHash:(NSString *)arg1 ;
-(void)_updateDerivedSubscriptionInfo;
-(BOOL)_validateNullableValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setProvidedSubscriptionInfo:(NSString *)arg1 ;
-(void)setMostRecentSaveDate:(NSDate *)arg1 ;
-(BOOL)validateAccessLevel:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateCreationDate:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateModificationDate:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateExpirationDate:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateSubscriberIdentifierHash:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateTierIdentifiers:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateBillingIdentifier:(id*)arg1 error:(id*)arg2 ;
-(void)setAccessLevel:(NSNumber *)arg1 ;
-(void)setTierIdentifiers:(NSArray *)arg1 ;
-(void)setBillingIdentifier:(NSString *)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
@end

