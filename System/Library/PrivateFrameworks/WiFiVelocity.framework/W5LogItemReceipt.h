/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5LogItemRequest, NSArray, NSDictionary;

@interface W5LogItemReceipt : NSObject <NSCopying, NSSecureCoding> {

	W5LogItemRequest* _request;
	NSArray* _relativeURLs;
	NSDictionary* _info;
	double _startedAt;
	double _completedAt;

}

@property (nonatomic,copy) W5LogItemRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSArray * relativeURLs;                  //@synthesize relativeURLs=_relativeURLs - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) double startedAt;                      //@synthesize startedAt=_startedAt - In the implementation block
@property (assign,nonatomic) double completedAt;                    //@synthesize completedAt=_completedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequest:(W5LogItemRequest *)arg1 ;
-(BOOL)isEqualToLogItemReceipt:(id)arg1 ;
-(void)setRelativeURLs:(NSArray *)arg1 ;
-(void)setStartedAt:(double)arg1 ;
-(void)setCompletedAt:(double)arg1 ;
-(NSArray *)relativeURLs;
-(double)startedAt;
-(double)completedAt;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)info;
-(W5LogItemRequest *)request;
-(void)setInfo:(NSDictionary *)arg1 ;
@end

