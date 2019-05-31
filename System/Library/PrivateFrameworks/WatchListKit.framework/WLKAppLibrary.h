/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSArray, NSObject, NSString;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSDictionary* _appProxies;
	NSArray* _allAppBundleIdentifiers;
	NSArray* _installedAppBundleIdentifiers;
	NSArray* _subscribedAppBundleIdentifiers;
	NSArray* _testAppBundleIdentifiers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	BOOL _appLibraryNeedsRefresh;
	long long _ignoreAppLibraryChangesCount;
	int _didChangeNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAppLibrary;
-(id)subscriptionInfoForBundle:(id)arg1 ;
-(id)_refreshAppLibrary;
-(void)_subscriptionsDidChangeNotification:(id)arg1 ;
-(id)_bundleIdentifiersfromProxies:(id)arg1 ;
-(void)_handleInvalidationWithReason:(id)arg1 ;
-(id)installedAppBundleIdentifiers;
-(id)testAppBundleIdentifiers;
-(id)allAppProxies;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)localizedNameForBundle:(id)arg1 ;
-(id)allAppBundleIdentifiers;
-(id)subscribedAppBundleIdentifiers;
-(void)beginIgnoringAppLibraryChanges;
-(void)endIgnoringAppLibraryChanges;
-(id)subscribedAppProxies;
-(id)installedAppProxies;
-(id)testAppProxies;
-(id)refresh;
-(id)init;
-(void)dealloc;
-(id)dictionaryRepresentation;
@end

