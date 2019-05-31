/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions {

	BOOL _supervised;
	NSString* _requestedProductVersion;
	long long _delayPeriod;

}

@property (nonatomic,retain) NSString * requestedProductVersion;              //@synthesize requestedProductVersion=_requestedProductVersion - In the implementation block
@property (assign,nonatomic) long long delayPeriod;                           //@synthesize delayPeriod=_delayPeriod - In the implementation block
@property (assign,nonatomic) BOOL supervised;                                 //@synthesize supervised=_supervised - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)supervised;
-(void)setRequestedProductVersion:(NSString *)arg1 ;
-(NSString *)requestedProductVersion;
-(long long)delayPeriod;
-(void)setDelayPeriod:(long long)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(void)logOptions;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
