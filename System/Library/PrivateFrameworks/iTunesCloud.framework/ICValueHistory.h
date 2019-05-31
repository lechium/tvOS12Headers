/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _items;

}

@property (nonatomic,readonly) long long count; 
+(BOOL)supportsSecureCoding;
-(void)addValue:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromHistory:(id)arg1 ;
-(id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1 ;
-(id)firstValueBeforeTimestamp:(unsigned long long)arg1 ;
-(void)removeAllValues;
-(void)removeValuesBeforeTimestamp:(unsigned long long)arg1 ;
-(id)lastValue;
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
