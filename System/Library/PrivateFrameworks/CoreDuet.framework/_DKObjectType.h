/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying> {

	long long _typeCode;
	Class _objectClass;

}

@property (nonatomic,readonly) long long typeCode; 
@property (nonatomic,readonly) Class objectClass; 
+(id)objectTypeWithName:(id)arg1 ;
+(id)objectTypeFromClass:(Class)arg1 ;
+(id)objectTypeWithTypeCode:(long long)arg1 ;
+(Class)associatedObjectClass;
+(long long)typeCodeFromName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(Class)objectClass;
-(id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2 ;
-(long long)typeCode;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

