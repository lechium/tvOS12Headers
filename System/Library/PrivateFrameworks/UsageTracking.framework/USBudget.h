/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary;

@interface USBudget : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;
	NSSet* _items;
	NSString* _calendarIdentifier;
	NSDictionary* _schedule;

}

@property (copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSSet * items;                              //@synthesize items=_items - In the implementation block
@property (copy,readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * schedule;                    //@synthesize schedule=_schedule - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSSet *)items;
-(NSString *)calendarIdentifier;
-(NSDictionary *)schedule;
-(id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5 ;
@end

