/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {

	PKDiscoveryDriver* _wdriver;

}

@property (__weak) PKDiscoveryDriver * wdriver;                     //@synthesize wdriver=_wdriver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDriver:(id)arg1 ;
-(void)stopUpdates;
-(void)setWdriver:(PKDiscoveryDriver *)arg1 ;
-(PKDiscoveryDriver *)wdriver;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)update;
@end

