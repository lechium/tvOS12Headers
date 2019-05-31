/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface W5NetworkStatus : NSObject <NSCopying, NSSecureCoding> {

	unsigned _isAppleReachable;
	NSString* _primaryIPv4InterfaceName;
	NSString* _primaryIPv4ServiceName;
	NSString* _primaryIPv6InterfaceName;
	NSString* _primaryIPv6ServiceName;
	NSString* _primaryIPv4ServiceID;
	NSString* _primaryIPv6ServiceID;
	NSArray* _primaryIPv4Addresses;
	NSArray* _primaryIPv6Addresses;
	NSString* _primaryIPv4Router;
	NSString* _primaryIPv6Router;
	NSArray* _primaryDNSAddresses;

}

@property (nonatomic,copy) NSString * primaryIPv4InterfaceName;              //@synthesize primaryIPv4InterfaceName=_primaryIPv4InterfaceName - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv4ServiceName;                //@synthesize primaryIPv4ServiceName=_primaryIPv4ServiceName - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv6InterfaceName;              //@synthesize primaryIPv6InterfaceName=_primaryIPv6InterfaceName - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv6ServiceName;                //@synthesize primaryIPv6ServiceName=_primaryIPv6ServiceName - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv4ServiceID;                  //@synthesize primaryIPv4ServiceID=_primaryIPv4ServiceID - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv6ServiceID;                  //@synthesize primaryIPv6ServiceID=_primaryIPv6ServiceID - In the implementation block
@property (nonatomic,copy) NSArray * primaryIPv4Addresses;                   //@synthesize primaryIPv4Addresses=_primaryIPv4Addresses - In the implementation block
@property (nonatomic,copy) NSArray * primaryIPv6Addresses;                   //@synthesize primaryIPv6Addresses=_primaryIPv6Addresses - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv4Router;                     //@synthesize primaryIPv4Router=_primaryIPv4Router - In the implementation block
@property (nonatomic,copy) NSString * primaryIPv6Router;                     //@synthesize primaryIPv6Router=_primaryIPv6Router - In the implementation block
@property (nonatomic,copy) NSArray * primaryDNSAddresses;                    //@synthesize primaryDNSAddresses=_primaryDNSAddresses - In the implementation block
@property (assign,nonatomic) unsigned isAppleReachable;                      //@synthesize isAppleReachable=_isAppleReachable - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)primaryIPv4InterfaceName;
-(NSString *)primaryIPv4ServiceName;
-(NSString *)primaryIPv6InterfaceName;
-(NSString *)primaryIPv6ServiceName;
-(NSString *)primaryIPv4ServiceID;
-(NSString *)primaryIPv6ServiceID;
-(NSArray *)primaryIPv4Addresses;
-(NSArray *)primaryIPv6Addresses;
-(NSString *)primaryIPv4Router;
-(NSString *)primaryIPv6Router;
-(NSArray *)primaryDNSAddresses;
-(unsigned)isAppleReachable;
-(BOOL)isEqualToNetworkStatus:(id)arg1 ;
-(void)setPrimaryIPv4InterfaceName:(NSString *)arg1 ;
-(void)setPrimaryIPv4ServiceName:(NSString *)arg1 ;
-(void)setPrimaryIPv6InterfaceName:(NSString *)arg1 ;
-(void)setPrimaryIPv6ServiceName:(NSString *)arg1 ;
-(void)setPrimaryIPv4ServiceID:(NSString *)arg1 ;
-(void)setPrimaryIPv6ServiceID:(NSString *)arg1 ;
-(void)setPrimaryIPv4Addresses:(NSArray *)arg1 ;
-(void)setPrimaryIPv6Addresses:(NSArray *)arg1 ;
-(void)setPrimaryIPv4Router:(NSString *)arg1 ;
-(void)setPrimaryIPv6Router:(NSString *)arg1 ;
-(void)setPrimaryDNSAddresses:(NSArray *)arg1 ;
-(void)setIsAppleReachable:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

