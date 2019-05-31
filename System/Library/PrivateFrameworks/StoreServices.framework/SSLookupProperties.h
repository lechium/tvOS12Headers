/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {

	CLLocation* _location;
	long long _localizationStyle;
	NSMutableDictionary* _requestParameters;
	NSNumber* _timeoutInterval;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle;              //@synthesize localizationStyle=_localizationStyle - In the implementation block
@property (nonatomic,copy) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutInterval;                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)timeoutInterval;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)copyRequestParameters;
-(NSString *)keyProfile;
-(long long)localizationStyle;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setLocalizationStyle:(long long)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

