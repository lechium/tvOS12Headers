/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>
#import <libobjc.A.dylib/NEExtensionDNSProxyProviderProtocol.h>

@class NSString;

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(BOOL)arg2 ;
-(void)setSystemDNSSettings:(id)arg1 ;
@end

