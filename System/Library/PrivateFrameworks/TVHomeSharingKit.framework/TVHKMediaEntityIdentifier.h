/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVHKMediaEntityIdentifier : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _protocol;

}

@property (assign,nonatomic) unsigned long long protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)mediaEntityIdentifierWithStringRepresentation:(id)arg1 ;
+(id)mediaEntityIdentifierWithProtocol:(unsigned long long)arg1 persistentID:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setProtocol:(unsigned long long)arg1 ;
-(id)initWithProtocol:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(unsigned long long)protocol;
@end

