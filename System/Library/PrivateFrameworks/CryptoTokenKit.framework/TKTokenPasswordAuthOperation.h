/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSString;

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation {

	NSString* _password;

}

@property (copy) NSString * password;              //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPassword:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
@end

