/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, GEONavigationServer, NSString;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _pushNavigationStateListener;
	NSXPCListener* _getNavigationStateListener;
	NSXPCListener* _monitorDestinationListener;
	GEONavigationServer* _navigationServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

