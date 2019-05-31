/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, NSString;

@interface ICDelegationPlayInfoResponseToken : NSObject {

	NSData* _tokenData;
	NSDate* _expirationDate;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy) NSData * tokenData;                           //@synthesize tokenData=_tokenData - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSData *)tokenData;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
@end
