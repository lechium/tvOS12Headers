/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) NSXPCListener * XPCListener;                   //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned short)connectionType;
+(id)dispatchQueue;
+(void)beginListeningWithAllServices;
+(id)allServiceClasses;
+(BOOL)XPCConnectionIsAlwaysPrivileged;
+(id)XPCConnectionToService;
+(id)synchronous:(BOOL)arg1 XPCProxyWithErrorHandler:(/*^block*/id)arg2 ;
+(id)synchronousXPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)XPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(Class)clientClass;
+(BOOL)isEnabled;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
+(id)XPCInterface;
-(id)initWithXPCListener:(id)arg1 ;
-(NSXPCListener *)XPCListener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

