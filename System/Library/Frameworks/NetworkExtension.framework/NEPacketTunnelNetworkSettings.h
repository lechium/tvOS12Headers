/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NEIPv4Settings, NEIPv6Settings, NSNumber;

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings {

	NEIPv4Settings* _IPv4Settings;
	NEIPv6Settings* _IPv6Settings;
	NSNumber* _tunnelOverheadBytes;
	NSNumber* _MTU;

}

@property (copy) NEIPv4Settings * IPv4Settings;               //@synthesize IPv4Settings=_IPv4Settings - In the implementation block
@property (copy) NEIPv6Settings * IPv6Settings;               //@synthesize IPv6Settings=_IPv6Settings - In the implementation block
@property (copy) NSNumber * tunnelOverheadBytes;              //@synthesize tunnelOverheadBytes=_tunnelOverheadBytes - In the implementation block
@property (copy) NSNumber * MTU;                              //@synthesize MTU=_MTU - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NEIPv4Settings *)IPv4Settings;
-(NEIPv6Settings *)IPv6Settings;
-(NSNumber *)tunnelOverheadBytes;
-(NSNumber *)MTU;
-(void)setIPv4Settings:(NEIPv4Settings *)arg1 ;
-(void)setIPv6Settings:(NEIPv6Settings *)arg1 ;
-(void)setTunnelOverheadBytes:(NSNumber *)arg1 ;
-(void)setMTU:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

