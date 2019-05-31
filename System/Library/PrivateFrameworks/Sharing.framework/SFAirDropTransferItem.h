/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding> {

	BOOL _isFile;
	NSString* _type;
	long long _count;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL isFile;                       //@synthesize isFile=_isFile - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)incrementCount;
-(BOOL)isFile;
-(id)initWithType:(id)arg1 isFile:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
@end
