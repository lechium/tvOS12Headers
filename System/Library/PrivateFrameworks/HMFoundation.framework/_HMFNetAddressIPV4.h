/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetAddressInternal.h>

@interface _HMFNetAddressIPV4 : HMFNetAddressInternal {

	sockaddr_in* _internal;

}

@property (nonatomic,readonly) sockaddr_in* internal;              //@synthesize internal=_internal - In the implementation block
-(id)addressString;
-(unsigned long long)addressFamily;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
-(sockaddr_in*)internal;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

