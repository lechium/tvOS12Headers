/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderHostProtocol.h>

@class NSString;

@interface NEExtensionTunnelProviderHostContext : NEExtensionProviderHostContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)establishIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didSetReasserting:(BOOL)arg1 ;
-(void)setTunnelConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleIPCDetached;
@end

