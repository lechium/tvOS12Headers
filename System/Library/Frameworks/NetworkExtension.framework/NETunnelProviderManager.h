/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEVPNManager.h>

@interface NETunnelProviderManager : NEVPNManager

@property (readonly) long long routingMethod; 
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithSessionType:(int)arg1 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyAppRules;
-(long long)routingMethod;
-(id)init;
@end

