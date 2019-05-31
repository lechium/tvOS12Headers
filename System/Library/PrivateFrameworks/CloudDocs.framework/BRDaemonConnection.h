/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(id)secondaryConnection;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)defaultConnection;
+(id)mobileDocumentsURL;
+(id)homeDirectoryURL;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)syncedRootURLs;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(void)invalidateCachedURLProperties;
+(void)initialize;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)newSyncTokenProxy;
-(BRXPCSyncProxy*)newSyncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end
