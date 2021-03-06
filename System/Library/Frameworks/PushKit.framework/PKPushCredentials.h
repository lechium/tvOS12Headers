/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface PKPushCredentials : NSObject {

	NSString* _type;
	NSData* _token;

}

@property (copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (copy) NSData * token;               //@synthesize token=_token - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
@end

