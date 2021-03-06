/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKMediaEntityIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVHKDAAPShowMediaCollectionIdentifier : TVHKMediaEntityIdentifier <NSSecureCoding> {

	NSString* _showTitle;

}

@property (nonatomic,copy) NSString * showTitle;              //@synthesize showTitle=_showTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setShowTitle:(NSString *)arg1 ;
-(NSString *)showTitle;
-(id)initWithProtocol:(unsigned long long)arg1 ;
-(id)initWithShowTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

