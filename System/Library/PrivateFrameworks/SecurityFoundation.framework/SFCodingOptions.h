/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFCodingOptions : NSObject <NSCopying> {

	id _codingOptionsInternal;

}

@property (assign,nonatomic) long long encoding; 
@property (nonatomic,copy) NSString * encryptionPassphrase; 
-(void)setEncoding:(long long)arg1 ;
-(NSString *)encryptionPassphrase;
-(void)setEncryptionPassphrase:(NSString *)arg1 ;
-(long long)encoding;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
