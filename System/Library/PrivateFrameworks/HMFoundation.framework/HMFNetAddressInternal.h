/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMFNetAddressInternal : HMFObject {

	unsigned long long _addressFamily;
	NSString* _addressString;

}

@property (nonatomic,readonly) unsigned long long addressFamily;              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressString;                 //@synthesize addressString=_addressString - In the implementation block
-(NSString *)addressString;
-(unsigned long long)addressFamily;
@end

