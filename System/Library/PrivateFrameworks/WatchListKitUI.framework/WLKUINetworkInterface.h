/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKUINetworkInterface.h>

@protocol WLKUINetworkInterface <JSExport>
@required
-(void)cancelRequest:(id)arg1;
-(id)makeRequest:(id)arg1 :(id)arg2;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2;
-(void)invalidateConfiguration;

@end


@class NSXPCConnection;

@interface WLKUINetworkInterface : IKJSObject <WLKUINetworkInterface> {

	BOOL _suppressServerConfigNotifications;
	int _playbackReportToken;
	NSXPCConnection* _connection;

}
-(void)cancelRequest:(id)arg1 ;
-(id)_connection;
-(void)_handleAppLibChange:(id)arg1 ;
-(void)_handleServerConfigChange:(id)arg1 ;
-(void)_handlePlaybackReport:(id)arg1 ;
-(void)_fireInitConfigCallbackWithUUID:(id)arg1 ;
-(id)makeRequest:(id)arg1 :(id)arg2 ;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2 ;
-(void)invalidateConfiguration;
-(id)initWithAppContext:(id)arg1 ;
-(void)dealloc;
@end
