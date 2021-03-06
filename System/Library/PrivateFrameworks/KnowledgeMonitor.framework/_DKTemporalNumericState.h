/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding> {

	NSNumber* _state;
	NSDate* _timestamp;

}

@property (retain) NSNumber * state;                //@synthesize state=_state - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithState:(id)arg1 timestamp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)state;
-(void)setState:(NSNumber *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

