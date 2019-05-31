/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {

	NSDate* _expiry;
	NSMutableDictionary* _values;
	NSMutableDictionary* _allowedAppVersionsCache;

}

@property (nonatomic,retain) NSMutableDictionary * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allowedAppVersionsCache;              //@synthesize allowedAppVersionsCache=_allowedAppVersionsCache - In the implementation block
@property (nonatomic,retain) NSDate * expiry;                                            //@synthesize expiry=_expiry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)flowControlBudgetForContainer:(id)arg1 ;
-(id)flowControlRegenerationForContainer:(id)arg1 ;
-(id)flowControlMaximumThrottleTime:(id)arg1 ;
-(double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1 ;
-(BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3 ;
-(unsigned long long)maxBatchSizeForContainer:(id)arg1 ;
-(BOOL)shouldSignForMessageType:(int)arg1 inDatabaseScope:(long long)arg2 forContainer:(id)arg3 ;
-(BOOL)allowExpiredDNSBehavior:(id)arg1 ;
-(unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1 ;
-(id)mescalCertURLForContainer:(id)arg1 ;
-(long long)tokenRegisterDaysForContainer:(id)arg1 ;
-(id)iCloudHostnames;
-(id)initWithValues:(id)arg1 ;
-(void)setExpiry:(NSDate *)arg1 ;
-(NSDate *)expiry;
-(NSMutableDictionary *)allowedAppVersionsCache;
-(void)setAllowedAppVersionsCache:(NSMutableDictionary *)arg1 ;
-(id)valueForKeyPath:(id)arg1 forContainer:(id)arg2 ;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)dictionaryPropertyEncoding;
-(unsigned)mescalServerVersionForContainer:(id)arg1 ;
-(id)mescalSessionURLForContainer:(id)arg1 ;
-(BOOL)isExpired;
-(NSString *)description;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)values;
@end

