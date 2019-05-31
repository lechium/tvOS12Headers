/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTAction, NSArray;

@interface RTActionCondition : NSObject <NSSecureCoding> {

	RTAction* _action;
	NSArray* _dateIntervals;

}

@property (nonatomic,readonly) RTAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSArray * dateIntervals;              //@synthesize dateIntervals=_dateIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)dateIntervals;
-(BOOL)isEqualToActionCondition:(id)arg1 ;
-(id)initWithAction:(id)arg1 dateIntervals:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(RTAction *)action;
@end
