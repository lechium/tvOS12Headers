/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTXPC : NSObject
+(id)checkClientConnection:(id)arg1 forEntitlements:(id)arg2 ;
+(BOOL)xpcConnection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)signingIdentifierOfConnection:(id)arg1 ;
+(id)allowInternalFrameworkAccessForConnection:(id)arg1 ;
+(BOOL)checkClientCodeSigning:(id)arg1 error:(id*)arg2 ;
+(id)executablePathOfConnection:(id)arg1 ;
@end

