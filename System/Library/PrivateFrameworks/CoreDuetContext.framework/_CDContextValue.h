/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDate;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadata;

}

@property (nonatomic,retain) NSMutableDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying>*<NSSecureCoding> value; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
+(id)supportedContextValueClasses;
+(BOOL)supportsSecureCoding;
-(NSMutableDictionary *)metadata;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(void)setValue:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
@end

