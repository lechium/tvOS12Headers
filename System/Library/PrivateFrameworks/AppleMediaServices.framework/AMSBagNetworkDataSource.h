/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagDataSourceProtocol.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSDictionary, NSObject, AMSUniqueExecutionQueue, AMSURLSession;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {

	/*^block*/id _dataSourceChangedHandler;
	NSString* _logKey;
	NSString* _profile;
	NSString* _profileVersion;
	NSDictionary* _cachedData;
	NSObject*<OS_dispatch_queue> _cachedDataAccessQueue;
	AMSUniqueExecutionQueue* _loadDataQueue;
	AMSURLSession* _URLSession;
	NSString* _storefront;

}

@property (nonatomic,retain) NSDictionary * cachedData;                                       //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedDataAccessQueue;              //@synthesize cachedDataAccessQueue=_cachedDataAccessQueue - In the implementation block
@property (nonatomic,retain) AMSUniqueExecutionQueue * loadDataQueue;                         //@synthesize loadDataQueue=_loadDataQueue - In the implementation block
@property (nonatomic,retain) AMSURLSession * URLSession;                                      //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) NSString * storefront;                                           //@synthesize storefront=_storefront - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) NSString * logKey;                                             //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * profile;                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileVersion;                                //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy) id dataSourceChangedHandler;                                       //@synthesize dataSourceChangedHandler=_dataSourceChangedHandler - In the implementation block
+(id)_account;
+(id)_URLCookieNamesForProfile:(id)arg1 ;
+(void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2 ;
+(BOOL)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2 ;
+(BOOL)_shouldReloadDataForSetStorefront:(id)arg1 bagData:(id)arg2 ;
+(id)_requestStorefrontFromURLResponse:(id)arg1 ;
+(id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2 ;
+(BOOL)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2 ;
+(id)_defaultURLCookieNames;
+(id)_OSString;
+(id)_OSVersionString;
+(id)_deviceString;
+(id)_cookiesForNames:(id)arg1 ;
+(id)_OSBuildTypeString;
-(BOOL)_isExpired;
-(id)_expirationDate;
-(NSDictionary *)cachedData;
-(NSDate *)expirationDate;
-(void)setCachedData:(NSDictionary *)arg1 ;
-(NSString *)profileVersion;
-(NSString *)logKey;
-(void)setStorefront:(NSString *)arg1 ;
-(NSString *)storefront;
-(void)_accountStoreDidChange:(id)arg1 ;
-(NSString *)profile;
-(AMSURLSession *)URLSession;
-(void)setURLSession:(AMSURLSession *)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(id)valueForURLVariable:(id)arg1 ;
-(id)_loadDataWithAttempt:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)cachedDataAccessQueue;
-(AMSUniqueExecutionQueue *)loadDataQueue;
-(id)_createURLWithCookieNames:(id)arg1 storefront:(id)arg2 ;
-(id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2 ;
-(id)_processLoadDataResult:(id)arg1 ;
-(void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1 ;
-(void)_updateCachedData:(id)arg1 ;
-(id)dataSourceChangedHandler;
-(void)setDataSourceChangedHandler:(id)arg1 ;
-(id)initWithProfile:(id)arg1 profileVersion:(id)arg2 logKey:(id)arg3 ;
-(void)setCachedDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLoadDataQueue:(AMSUniqueExecutionQueue *)arg1 ;
-(void)dealloc;
-(BOOL)isLoaded;
-(NSString *)description;
@end

