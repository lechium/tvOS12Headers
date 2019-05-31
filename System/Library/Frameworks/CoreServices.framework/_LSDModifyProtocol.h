/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDModifyProtocol
@required
-(void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)unregisterExtensionPoint:(id)arg1 withVersion:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned)arg3 forContentType:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)removeHandlerForURLScheme:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)synchronizeWithMobileInstallation;
-(void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 completionHandler:(/*^block*/id)arg6;
-(void)garbageCollectDatabaseWithCompletionHandler:(/*^block*/id)arg1;
-(void)rebuildApplicationDatabasesForSystem:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setHandlerOptions:(unsigned)arg1 forContentType:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeHandlerForContentType:(id)arg1 roles:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)unregisterBundleUnit:(unsigned)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)registerContainerURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateContainerUnit:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)resetServerStoreWithCompletionHandler:(/*^block*/id)arg1;
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4;

@end

