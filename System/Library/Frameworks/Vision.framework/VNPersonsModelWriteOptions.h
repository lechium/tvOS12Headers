/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPersonsModelWriteOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	unsigned long long _version;

}

@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL readOnly;                           //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setReadOnly:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(BOOL)readOnly;
@end

