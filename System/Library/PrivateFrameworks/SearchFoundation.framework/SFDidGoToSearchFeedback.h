/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFDidGoToSearchFeedback : SFFeedback {

	NSString* _input;
	unsigned long long _endpoint;

}

@property (nonatomic,copy) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 endpoint:(unsigned long long)arg2 ;
-(void)setInput:(NSString *)arg1 ;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(unsigned long long)endpoint;
@end
