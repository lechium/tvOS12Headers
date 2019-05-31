/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding> {

	id _keychainDataInternal;

}

@property (readonly) NSData * data; 
@property (nonatomic,retain) SFKeychainDataAttributes * attributes; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFKeychainDataAttributes *)attributes;
-(void)setAttributes:(SFKeychainDataAttributes *)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

