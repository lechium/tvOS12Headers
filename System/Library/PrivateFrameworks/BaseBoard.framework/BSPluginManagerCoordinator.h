/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {

	NSMutableDictionary* _managersByBundleID;

}
+(id)sharedInstance;
-(void)registerPluginsFromBundle:(id)arg1 ;
-(id)pluginManagerForBundle:(id)arg1 ;
-(void)registerPlugins;
-(id)mainPluginManager;
-(id)_init;
@end

