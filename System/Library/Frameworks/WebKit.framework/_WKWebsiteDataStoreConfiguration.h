/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL;

@interface _WKWebsiteDataStoreConfiguration : NSObject {

	RetainPtr<NSURL>* _webStorageDirectoryURL;
	RetainPtr<NSURL>* _indexedDBDatabaseDirectoryURL;
	RetainPtr<NSURL>* _webSQLDatabaseDirectoryURL;
	RetainPtr<NSURL>* _cookieStorageFileURL;
	RetainPtr<NSURL>* _resourceLoadStatisticsDirectoryURL;
	RetainPtr<NSURL>* _cacheStorageDirectoryURL;
	RetainPtr<NSURL>* _serviceWorkerRegistrationDirectoryURL;

}

@property (setter=_setWebStorageDirectory:,nonatomic,copy) NSURL * _webStorageDirectory; 
@property (setter=_setIndexedDBDatabaseDirectory:,nonatomic,copy) NSURL * _indexedDBDatabaseDirectory; 
@property (setter=_setWebSQLDatabaseDirectory:,nonatomic,copy) NSURL * _webSQLDatabaseDirectory; 
@property (setter=_setCookieStorageFile:,nonatomic,copy) NSURL * _cookieStorageFile; 
@property (setter=_setResourceLoadStatisticsDirectory:,nonatomic,copy) NSURL * _resourceLoadStatisticsDirectory; 
@property (setter=_setCacheStorageDirectory:,nonatomic,copy) NSURL * _cacheStorageDirectory; 
@property (setter=_setServiceWorkerRegistrationDirectory:,nonatomic,copy) NSURL * _serviceWorkerRegistrationDirectory; 
-(NSURL *)_webStorageDirectory;
-(void)_setWebStorageDirectory:(id)arg1 ;
-(NSURL *)_indexedDBDatabaseDirectory;
-(void)_setIndexedDBDatabaseDirectory:(id)arg1 ;
-(NSURL *)_webSQLDatabaseDirectory;
-(void)_setWebSQLDatabaseDirectory:(id)arg1 ;
-(NSURL *)_cookieStorageFile;
-(void)_setCookieStorageFile:(id)arg1 ;
-(NSURL *)_resourceLoadStatisticsDirectory;
-(void)_setResourceLoadStatisticsDirectory:(id)arg1 ;
-(NSURL *)_cacheStorageDirectory;
-(void)_setCacheStorageDirectory:(id)arg1 ;
-(NSURL *)_serviceWorkerRegistrationDirectory;
-(void)_setServiceWorkerRegistrationDirectory:(id)arg1 ;
@end

