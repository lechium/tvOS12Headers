/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSBonjourIPv6Address : NSObject <NSCopying> {

	unsigned char _ipv6Address[16];
	unsigned char _linkLayerAddress[6];
	BOOL _hasLinkLayerAddress;

}

@property (assign,nonatomic) BOOL hasLinkLayerAddress;                    //@synthesize hasLinkLayerAddress=_hasLinkLayerAddress - In the implementation block
@property (nonatomic,readonly) const char* ipv6Address; 
@property (nonatomic,readonly) const char* linkLayerAddress; 
+(BOOL)getLinkLayerAddress:(char*)arg1 forIPv6Address:(const char*)arg2 error:(id*)arg3 ;
-(const char*)ipv6Address;
-(void)pokeDestinationAtPort:(unsigned short)arg1 onInterfaceIndex:(unsigned)arg2 ;
-(BOOL)hasLinkLayerAddress;
-(void)setHasLinkLayerAddress:(BOOL)arg1 ;
-(const char*)linkLayerAddress;
-(BOOL)getLinkLayerAddressError:(id*)arg1 ;
-(id)initWithIPv6Address:(const char*)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

