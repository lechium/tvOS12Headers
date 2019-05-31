/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUplink;
	BOOL _allowsCellularAccess;

}

@property (assign,nonatomic) BOOL isUplink;                          //@synthesize isUplink=_isUplink - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;              //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setIsUplink:(BOOL)arg1 ;
-(BOOL)isUplink;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

