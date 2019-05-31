/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataTuple : HMFObject {

	NSString* _characteristicType;
	NSString* _serviceType;
	NSString* _index;

}

@property (nonatomic,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * index;                           //@synthesize index=_index - In the implementation block
-(NSString *)serviceType;
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)index;
@end
