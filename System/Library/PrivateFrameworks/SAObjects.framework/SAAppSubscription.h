/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, NSArray;

@interface SAAppSubscription : SADomainObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSArray * subscriptionTiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appSubscription;
+(id)appSubscriptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)subscriptionTiers;
-(void)setSubscriptionTiers:(NSArray *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
@end

