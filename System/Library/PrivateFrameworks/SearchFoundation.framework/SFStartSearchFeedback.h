/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFStartSearchFeedback : SFFeedback {

	NSString* _input;
	NSString* _uuid;
	unsigned long long _triggerEvent;
	unsigned long long _queryId;

}

@property (nonatomic,retain) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * input;                               //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                   //@synthesize queryId=_queryId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
-(unsigned long long)queryId;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(unsigned long long)triggerEvent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
-(NSString *)input;
@end
