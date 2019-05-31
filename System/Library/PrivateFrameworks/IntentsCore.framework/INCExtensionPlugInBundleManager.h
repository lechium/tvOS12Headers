/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface INCExtensionPlugInBundleManager : NSObject {

	NSMutableDictionary* _intentsSupported;
	NSObject*<OS_dispatch_queue> _intentsSupportedQueue;
	NSDictionary* _pluginsPlistDictionary;

}
+(id)sharedManager;
-(id)_extensionPlugInBundleForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(BOOL*)arg2 ;
-(BOOL)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_setExtensionPlugInBundle:(id)arg1 forIntent:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)extensionForIntent:(id)arg1 ;
-(id)init;
@end

