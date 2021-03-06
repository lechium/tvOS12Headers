/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskMetrics.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDateInterval;

@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding> {

	NSArray* _transactionMetrics;
	NSDateInterval* _taskInterval;
	unsigned long long _redirectCount;

}
+(BOOL)supportsSecureCoding;
-(id)_initWithTask:(id)arg1 ;
-(void)setTaskInterval:(id)arg1 ;
-(unsigned long long)redirectCount;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(id)transactionMetrics;
-(void)setTransactionMetrics:(id)arg1 ;
-(id)taskInterval;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

